/***********************************************************************
 * Copyright (c) 2010, Secure Endpoints Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 **********************************************************************/

#include <windows.h>
#include <delayimp.h>
#include <tchar.h>

#ifdef LoadLibraryA
#undef LoadLibraryA
#endif

#ifdef LoadLibraryW
#undef LoadLibraryW
#endif

#pragma comment(lib, "delayimp.lib")
#ifdef _WIN64
#pragma comment(linker, "\"/manifestdependency:type='win32' name='Heimdal.Compatibility' version='0.99.1.925' processorArchitecture='amd64' publicKeyToken='e20541c6ffd4c141' language='*'\"")
#else
#pragma comment(linker, "\"/manifestdependency:type='win32' name='Heimdal.Compatibility' version='0.99.1.925' processorArchitecture='x86' publicKeyToken='e20541c6ffd4c141' language='*'\"")
#endif

#define FACILITY_VISUALCPP  ((LONG)0x6d)
#define VcppException(sev,err)  ((sev) | (FACILITY_VISUALCPP<<16) | err)

static LONG volatile attempted_activation_context = 0;

static HMODULE g_hModule = NULL;

static DWORD
DelayLoadExceptionFilter(DWORD code, BOOL * loaded)
{
    if (code == VcppException(ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND)) {
        *loaded = FALSE;
        return EXCEPTION_CONTINUE_EXECUTION;
    }

    if (code == VcppException(ERROR_SEVERITY_ERROR, ERROR_PROC_NOT_FOUND))
        return EXCEPTION_CONTINUE_EXECUTION;
    return EXCEPTION_CONTINUE_SEARCH;
}

/**
 * Helper functions for using delay loaded DLLs.
 *
 * (See: http://msdn.microsoft.com/en-us/library/151kt790.aspx )
 * 
 * To use these functions:
 *
 * - Include delayhelper.obj in the link step for the .EXE or .DLL
 *   that is using delay loading.
 * 
 * - Specify the DLLs that should be delay loaded using the
 *   /DELAYLOAD:<dllname>.dll linker option.
 *
 * - When the .DLL or .EXE is initialized, call DelayLoadLibrary() and
 *   specify the .DLL that should be loaded.
 *
 * The DelayLoadLibrary() call will attempt to load the specified DLL
 * and resolve all the delay loaded exports from it.  If any of the
 * exports were not found, then the corresponding function pointer
 * will be set to NULL.  If the library itself couldn't be found,
 * DelayLoadLibrary() will return FALSE.
 *
 * Once DelayLoadLibrary() is called, you can check if a particular
 * export was resolved by testing whether the function pointer is
 * NULL. I.e.:
 *
 * @code
 * if ( SomeFunction != NULL ) {
 *    // SomeFunction was successfully resolved
 * }
 * @endcode
 */
BOOL
DelayLoadLibrary(LPCSTR libname)
{
    BOOL loaded = TRUE;

    __try {
        __HrLoadAllImportsForDll(libname);
    } __except( DelayLoadExceptionFilter(GetExceptionCode(), &loaded) ) {
    }

    return loaded;
}

/**
 * Try and activate Heimdal activation context
 *
 * We need to locate heimdal.dll and heimdal_compat.dll on this
 * system.  The Heimdal assembly, including heimdal.dll will only be
 * there if Heimdal libraries are installed.  Therefore, we can't list
 * Heimdal.Kerberos or Heimdal.GSSAPI assemblies in our application
 * manifest (if those assemblies are not installed, then the
 * application will fail to start.)
 *
 * As an alternative, the compat library requires that an alternate
 * application manifest be embedded in the application binary.  This
 * manifest directly references the Heimdal assemblies. We try to
 * instantiate a new activation context using that.  If successful,
 * that means that the desired version of the Heimdal assemblies are
 * installed and we will be able to use heimdal.dll from there.
 * Otherwise, we will be using the compatibility layer.
 */
BOOL
TryActivateHeimdal(HANDLE *pCtx, ULONG_PTR *pCookie, HMODULE myModule)
{
    ACTCTX ctx;
    BOOL activated = FALSE;

    if (InterlockedIncrement(&attempted_activation_context) != 1)
        return FALSE;

    *pCtx = INVALID_HANDLE_VALUE;

    ZeroMemory(&ctx, sizeof(ctx));

    ctx.cbSize = sizeof(ctx);

    ctx.dwFlags =
        ACTCTX_FLAG_RESOURCE_NAME_VALID |
        ACTCTX_FLAG_HMODULE_VALID |
        ACTCTX_FLAG_APPLICATION_NAME_VALID;

    ctx.lpResourceName = MAKEINTRESOURCE(256);
    /* This is the magic alternate application manifest resource
     * ID. */

    ctx.lpApplicationName = _T("Heimdal.Application");

    if (myModule == NULL)
        myModule = g_hModule;
    else
        g_hModule = myModule;

    if (myModule == NULL)
        myModule = GetModuleHandle(NULL);

    ctx.hModule = myModule;

    *pCtx = CreateActCtx(&ctx);

    if (*pCtx == INVALID_HANDLE_VALUE) {
        /* Failed to create activation context.  This can happen due
         * to a number of reasons.
         *
         * - Heimdal assemblies are not installed, or not the correct
         *   version.
         *
         * - Manual configuration of activation contexts is not
         *   possible.
         *
         * - Manifest resources missing.
         *
         * etc.  We don't consider this to be fatal.  Instead we load
         * the library anyway and let the failover logic deal with the
         * missing library.
         */
    } else {

        activated = ActivateActCtx(*pCtx, pCookie);

    }

    return activated;
}

BOOL
DelayLoadHeimdal(HMODULE myModule)
{
    BOOL activated;
    HANDLE hActCtx = INVALID_HANDLE_VALUE;
    ULONG_PTR cookie = 0;
    BOOL rv = FALSE;

    activated = TryActivateHeimdal(&hActCtx, &cookie, myModule);

    rv = DelayLoadLibrary("heimdal.dll");

    if (activated) {
        DeactivateActCtx(0, cookie);
    }

    if (hActCtx != INVALID_HANDLE_VALUE) {
        ReleaseActCtx(hActCtx);
        hActCtx = INVALID_HANDLE_VALUE;
    }

    return rv;
}

/**
 * Failure hook for handling module-not-found errors
 *
 * When the delay load helper function starts loading delayloaded
 * imports and encounters a failure, it will call whichever function
 * is bound to '__pfnDliFailureHook2'.  Here we attempt to use
 * heimdal_compat.dll instead of heimdal.dll.
 */
static FARPROC WINAPI
DelayLoadFailureHook(unsigned dliNotify,
                     PDelayLoadInfo  pdli)
{
    if (dliNotify == dliFailLoadLib) {
        if (stricmp(pdli->szDll, "heimdal.dll") == 0) {
            BOOL activated;
            HANDLE hActCtx = INVALID_HANDLE_VALUE;
            ULONG_PTR cookie = 0;
            FARPROC lib = NULL;

            /* We are going to call TryActivateHeimdal() again here in
             * case the failure hook gets called before
             * DelayLoadHeimdal() is called.  This can happen if the
             * application we are linked against either doesn't call
             * DelayLoadHeimdal() or calls a Heimdal function before
             * calling DelayLoadHeimdal().
             *
             * Calling TryActivateHeimdal() multiple times doesn't
             * hurt.  It only does any work the first time its
             * called. */
            activated = TryActivateHeimdal(&hActCtx, &cookie, NULL);

            if (activated) {
                lib = (FARPROC) LoadLibraryA("heimdal.dll");
                DeactivateActCtx(0, cookie);
            }

            if (hActCtx != INVALID_HANDLE_VALUE) {
                ReleaseActCtx(hActCtx);
                hActCtx = INVALID_HANDLE_VALUE;
            }

            if (lib == NULL) {
                lib = (FARPROC) LoadLibraryA("heimdal_compat.dll");
            }

            return lib;
        }
    }

    return 0;
}

PfnDliHook   __pfnDliFailureHook2 = DelayLoadFailureHook;
