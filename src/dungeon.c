#include "dungeon.h"

DungeonTerrain DT_NULL( '#', COLOR_MAGENTA );

DungeonTerrain::DungeonTerrain( char s, int c ) : Drawable( s, c ){
}

DungeonTerrain::~DungeonTerrain(){}

DungeonTile::DungeonTile(){}

DungeonTile::~DungeonTile(){}

DungeonTerrain& DungeonTile::getTileTerrain(){
    return *this->tileTerrain;
}
