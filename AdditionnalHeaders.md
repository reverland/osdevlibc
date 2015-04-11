### `machine/_target.h` ###

This header tries to detect what is the current compilation target using compiler-specific headers.

```
_TARGET_X86_
_TARGET_ARM_
_TARGET_MIPS_
_TARGET_POWERPC_
```


### `machine/_types` ###

This header defines some macros specific to GCC if you compile with something else than GCC.

This header should not be included in anything else than this libc.