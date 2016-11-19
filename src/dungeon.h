#ifndef DUNGEON_H
#define DUNGEON_H

#include "drawable.h"
#include "monster.h"

class DungeonTerrain : public Drawable {
public:
    DungeonTerrain( char symbol = '.', int color = COLOR_WHITE );
    ~DungeonTerrain();
};

extern DungeonTerrain DT_NULL;

class DungeonTile{
public:
    DungeonTile( DungeonTerrain* terrain = &DT_NULL );
    ~DungeonTile();
    DungeonTerrain& getTileTerrain();
    Monster& getTileOccupant();
private:
    DungeonTerrain* tileTerrain;
    Monster* tileOccupant;
};

class Dungeon{
};

#endif
