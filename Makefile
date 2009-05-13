BINARY=bin/libc.a
OBJS=build/stdio.o build/stdlib.o build/string.o

all : $(BINARY)
	

build/%.o : src/%.c
	gcc -nostdlib -I include/ -c -O3 -o $@ $^

$(BINARY) : $(OBJS)
	rm -f $@
	ar -rs $@ $^
