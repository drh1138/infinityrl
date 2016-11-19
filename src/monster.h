#ifndef MONSTER_H
#define MONSTER_H

#include <curses.h>
#include "drawable.h"

class MonsterType : public Drawable {
public:
    MonsterType( char symbol = '&', int color = COLOR_MAGENTA );
    ~MonsterType();
private:
};

class Monster {
public:
    Monster();
    ~Monster();
    MonsterType& getMonsterType();
private:
    MonsterType* monsterType;
};

#endif
