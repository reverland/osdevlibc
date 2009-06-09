cmake_minimum_required(VERSION 2.6)
project(OSDevLibC)

set(CMAKE_C_FLAGS "-nostdlib -O3")
include_directories(./include) 

add_library(osdevc STATIC src/errno.c src/math_exp.c src/math_misc.c src/math_pow.c src/math_trigo.c src/stdio.c src/stdlib.c src/string.c src/uchar.c src/wchar.c)
install(TARGETS osdevc DESTINATION ${PROJECT_SOURCE_DIR}/bin)
