all: dbg

release: dbg
	strip --strip-debug bin/main

dbg: dirs main

dirs:
	mkdir -p bin/ obj/

main: dirs dungeon monster drawable
	g++ -g -c src/main.c -o obj/main.o
	g++ obj/main.o obj/dungeon.o obj/monster.o obj/drawable.o -o bin/main -lncurses

dungeon: dirs
	g++ -g -c src/dungeon.c -o obj/dungeon.o

monster: dirs
	g++ -g -c src/monster.c -o obj/monster.o

drawable: dirs
	g++ -g -c src/drawable.c -o obj/drawable.o

clean:
	rm -fr bin/ obj/
