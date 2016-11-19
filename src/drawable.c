#include "drawable.h"

Drawable::Drawable( char s, int c ) : symbol( s ), color( c ){
}

Drawable::~Drawable(){}

char& Drawable::getSymbol(){
    return this->symbol;
}

int& Drawable::getColor(){
    return this->color;
}
