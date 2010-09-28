Heimdal Compatibility SDK
=========================

The files in this package constitute a Heimdal compatibility library.
Applications compiled against it will work with compatible versions of
Heimdal libraries.  If the usage of the Heimdal API is constrained to
a supported subset, then the application can also be expected to work
with MIT Kerberos for Windows libraries with no modifications.

Using the compatibility SDK from an .EXE
----------------------------------------

For basic use, write your code as if you are linking directly with
Heimdal libraries.  Use the header files in the `inc` subdirectory.
These are the same header files produced by Heimdal, with a few
additions.  You may compile your code normally.

Also compile `src\krbcompat_delayload.c`.  This file contains code for
handling delayloading of Heimdal or MIT Kerberos for Windows.  It is
provided in source form so that it can be compiled with the same
runtime settings as your code.

When linking, link against `heimdal.lib` and `libcom_err.lib` as
necessary, specify `heimdal.dll` as a delayloaded dependency and
include `krbcompat_manifests.res` and `krbcompat_delayload.obj`
(produced by compiling `krbcompat_delayload.c`) in the link step.  The
libraries are in the `lib\%CPU%\` directory where %CPU% is either
`AMD64` or `x86` depending on the target architecture.

In summary: For basic use of the compatibility SDK with an .EXE:

* Compile against the header files in `inc`.

  - Also compile `src\krbcompat_delayload.c` using the same settings
    as your code.

* When linking:

  - Link against `lib\%CPU%\heimdal.lib` and (optionally)
    `lib\%CPU%\libcom_err.lib`.

  - Include `lib\%CPU%\krbcompat_manifests.res` in the link step.

  - Specify `heimdal.dll` as a delayloaded dependency.  I.e.: add
    `/DELAYLOAD:heimdal.dll` as an option to `link`.

Using the Compatibility SDK from a .DLL
---------------------------------------

This is similar to how you would use the SDK from an .EXE, except you
will need to call `DelayLoadHeimdal()` function directly:

* Compile against the header files in `inc`.

  - Also compile `src\krbcompat_delayload.c` using the same settings
    as your code.

  - From an initialization function, call `DelayLoadHeimdal()` and
    specify the handle to the .DLL instance:


        void MyInitializationFunction() {
        ...
        if (!DelayLoadHeimdal(hInstance)) {
           // Couldn't find Heimdal or Kerberos for Windows
           ...
        }
        ...
        }


    `DelayLoadHeimdal()` returns `TRUE` if it successfully loaded
    either Heimdal or Kerberos for Windows.  If it returns a failure
    code, then it is not safe to call any Heimdal APIs.

    The `hInstance` in the above call is the handle to the module
    instance which was passed in to your `DllMain()` function.  Do
    note that `DelayLoadHeimdal()` is not safe to be called from
    within `DllMain()` since it tries to call `LoadLibrary()`
    internally.

* When linking:

  - Link against `lib\%CPU%\heimdal.lib` and (optionally)
    `lib\%CPU%\libcom_err.lib`.

  - Include `lib\%CPU%\krbcompat_manifests.res` in the link step.

  - Specify `heimdal.dll` as a delayloaded dependency.  I.e.: add
    `/DELAYLOAD:heimdal.dll` as an option to `link`.

Safely checking whether a Kerberos backend is available
-------------------------------------------------------

You can call `DelayLoadHeimdal()` to safely check for the existence of
a Kerberos backend and load it.  Calling this function is mandatory
for .DLLs, but optional for .EXEs.

Once the function is called, it will return `TRUE` if a backend was
successfully loaded.  However, some APIs may not be available
depending on the backend.

When Heimdal is delay loaded, each function call goes through a
function pointer.  Therefore, this pointer can be used to check if the
function is available:

    ...

    DelayLoadHeimdal(hInstance);

    ...

    if (krb5_cccol_cursor_new != NULL) {
       // krb5_cccol_cursor_new() is available
       ...
    }

    ...

Testing function pointers should only be done **after**
`DelayLoadHeimdal()` is called.

If `DelayLoadHeimdal()` is not called, then calling Heimdal APIs from
a .DLL may result in an exception even if Heimdal or Kerberos for
Windows is available.

If a Heimdal API is called from an .EXE without calling
`DelayLoadHeimdal()`, then a suitable Kerberos backend will be loaded
and then the function will be called as if `DelayLoadHeimdal()` was
called earlier.  This process is largely transparent to the client
application.

License
-------

See the `LICENSE` file for license information.

