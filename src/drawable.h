#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <curses.h>

class Drawable{
public:
    Drawable( char symbol = '&', int color = COLOR_MAGENTA );
    virtual ~Drawable();
    char& getSymbol();
    int& getColor();
private:
    char symbol;
    int color;
};

extern Drawable DRAW_NULL;

#endif
