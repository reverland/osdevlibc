BINARY=bin/libc.a
OBJS=build/stdio.o build/stdlib.o build/string.o build/math_exp.o build/math_misc.o build/math_pow.o build/math_trigo.o build/uchar.o build/wchar.o

all : $(BINARY)
	

build/%.o : src/%.c
	gcc -nostdlib -I include/ -c -O3 -o $@ $^

$(BINARY) : $(OBJS)
	rm -f $@
	ar -rs $@ $^
