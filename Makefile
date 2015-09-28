all: dbg
	
release: dbg
	strip --strip-debug bin/main

dbg: dirs main

dirs:
	mkdir -p bin/ obj/

main: dirs main.o
	gcc obj/main.o -o bin/main -lncurses

main.o: dirs src/main.c src/main.h
	gcc -g -c src/main.c -o obj/main.o

clean:
	rm -fr bin/ obj/