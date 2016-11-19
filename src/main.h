#ifndef MAIN_H
#define MAIN_H

#include <curses.h>
#include "dungeon.h"

class GameEngine{
public:
    GameEngine();
    ~GameEngine();
    Dungeon& getLoadedDungeon();
private:
    Dungeon* loadedDungeon;
};

#endif
