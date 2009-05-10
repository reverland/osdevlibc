BINARY=bin/libc.a
OBJS=build/assert.o build/stdio.o build/stdlib.o build/string.o


build/%.o : src/%.c
	gcc -nostdlib -I include/ -c -O3 -o $@ $^

$(BINARY) : $(OBJS)
	rm -f $@
	ar -rs $@ $^

