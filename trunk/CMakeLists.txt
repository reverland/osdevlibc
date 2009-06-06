project(OSDevLibC)

include_directories(./include) 
add_library(osdevc STATIC src/errno.c src/math_exp.c src/math_misc.c src/math_pow.c src/math_trigo.c src/stdio.c src/stdlib.c src/string.c src/uchar.c src/wchar.c)
