#ifndef COLOR_H
#define COLOR_H
#include <SDL2/SDL.h>

class Color
{
public:
	Color(int red ,int blue ,int green , int alpha = 255);
    void use( SDL_Renderer* screen) const ;
private:
	int red;
	int blue;
	int green;
	int alpha;
};

#endif
