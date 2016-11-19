#include "monster.h"

MonsterType::MonsterType( char s, int c ) : Drawable( s, c ){
}

MonsterType::~MonsterType(){}

MonsterType& Monster::getMonsterType(){
    return *this->monsterType;
}
