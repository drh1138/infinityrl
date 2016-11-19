#ifndef ENTITY_H
#define ENTITY_H

#include <curses.h>

class EntityType : public Drawable{
public:
    EntityType( char symbol = '&', int color = COLOR_MAGENTA );
    virtual ~EntityType();
private:
};

class Entity{
public:
    Entity( EntityType* entityType );
    virtual ~Entity();
    EntityType& getEntityType();
private:
    EntityType* entityType;
};

#endif
