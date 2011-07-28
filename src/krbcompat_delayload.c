/* @delayloadlibrary@ */
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

#define ISOLATION_AWARE_ENABLED 1

#include <windows.h>
#include <delayimp.h>
#include <tchar.h>

#define FACILITY_VISUALCPP  ((LONG)0x6d)
#define VcppException(sev,err)  ((sev) | (FACILITY_VISUALCPP<<16) | err)

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

/***********************************************************************
 * Copyright (c) 2010-2011, Secure Endpoints Inc.
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

#pragma comment(lib, "delayimp.lib")
#ifdef _WIN64
#pragma comment(linker, "\"/manifestdependency:type='win32' name='Kerberos.Compatibility' version='1.0.1.0' processorArchitecture='amd64' publicKeyToken='25cbfc488f69fb70' language='*'\"")
#else
#pragma comment(linker, "\"/manifestdependency:type='win32' name='Kerberos.Compatibility' version='1.0.1.0' processorArchitecture='x86' publicKeyToken='25cbfc488f69fb70' language='*'\"")
#endif

static LONG volatile attempted_activation_context = 0;

static BOOL (*pDelayLoadKfW)(void) = NULL;
static BOOL (*pDelayLoadForwarder)(void) = NULL;

/**
 * Delay load heimdal.dll
 *
 * Performs a guarded load of `heimdal.dll` as detailed in
 * DelayLoadLibrary().
 *
 * @see DelayLoadLibrary()
 */
BOOL
DelayLoadHeimdal(void)
{
    BOOL bHeimdal, bKfW = TRUE, bForwarder = TRUE;

    bHeimdal = DelayLoadLibrary("heimdal.dll");
    if (pDelayLoadKfW)
        bKfW = (*pDelayLoadKfW)();
    if (pDelayLoadForwarder)
        bForwarder = (*pDelayLoadForwarder)();

    return bHeimdal && bKfW && bForwarder;
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
            FARPROC lib = NULL;

            lib = (FARPROC) LoadLibraryA("heimdal_forwarder.dll");

            if (lib == NULL) {
                lib = (FARPROC) LoadLibraryA("heimdal_compat.dll");
                if (lib != NULL && pDelayLoadKfW == NULL) {
                    pDelayLoadKfW = (BOOL (*)(void))
                        GetProcAddress((HMODULE) lib, "DelayLoadKfW");
                }
            } else {
                pDelayLoadForwarder = (BOOL (*)(void))
                    GetProcAddress((HMODULE) lib, "DelayLoadForwarder");
            }

            return lib;
        }
    }

    return 0;
}

PfnDliHook   __pfnDliFailureHook2 = DelayLoadFailureHook;
