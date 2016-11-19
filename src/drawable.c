#include "drawable.h"

Drawable DRAW_NULL( '&', COLOR_MAGENTA );

Drawable::Drawable( char s, int c ) : symbol( s ), color( c ){
}

Drawable::~Drawable(){}

char& Drawable::getSymbol(){
    return this->symbol;
}

int& Drawable::getColor(){
    return this->color;
}
