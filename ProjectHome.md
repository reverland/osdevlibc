Many people enjoy amateur O/S developpement.
But when you are no longer in a hosted environnement, there is a lack of useful functions (especially those in string.h).
While some functions (like printf or fopen) are dependant on an operating system, some others are not.

The purpose of OSDev libC is to provide a freestanding platform-independant compiler-independant C library with as many functions as possible which do not require any external linking.

_Note: for the moment the project is not compiler-independant, you may only use GCC_


## Using the library with your O/S ##
OSDev libc implements all the system-independant functions like memcpy, sprintf, etc.
To use these functions, use the library's include directory as an include path for the compiler and link your kernel with the library.

## What is done ##
  * Almost all headers (except mainly inttypes.h, locale.h, float.h)
  * stdarg.h, stdint.h, ctype.h
  * Functions in string.h
  * memcpy, memset are optimized for x86
  * Some utilities from stdlib.h
  * Most part of the math functions for x86
  * sprintf/snprintf/vsprintf/vsnprintf are usable except for floating point numbers

## Needs to be done ##
  * Wide chars
  * Math functions for other platforms
  * Platform-independant implementations for math functions (if possible)
  * sscanf/snscanf/vsscanf/vsnscanf
  * Support for other compilers than GCC (though inline assembly - and thus optimization - will certainly only be implemented with the GCC syntax)

## Where are the releases? ##
Version 0.1 will be released when everything is implemented, and then version 1.0 will be released when all the bugs are corrected.

## Building the library ##
The library is using [CMake](http://www.cmake.org/) as its build system.
There is however a configure script that you can use:
```
path-to-project-directory/configure --host=<machine>
make
```

**Note: for the moment CMake seems to crash sometimes when building from inside the project tree**