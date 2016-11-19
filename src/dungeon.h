#ifndef DUNGEON_H
#define DUNGEON_H

#include "drawable.h"
#include "monster.h"

extern Drawable DRAW_DEF_TERRAIN;

class DungeonTerrain : public Drawable {
public:
    DungeonTerrain( Drawable& drawData = DRAW_DEF_TERRAIN );
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