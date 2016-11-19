#include "main.h"

int main( int argc, char* argv[] ){
	initscr();
	start_color();

	endwin();
	return 0;
}

GameEngine::GameEngine(){
}

GameEngine::~GameEngine(){
}

Dungeon& GameEngine::getLoadedDungeon(){
    return *this->loadedDungeon;
}
