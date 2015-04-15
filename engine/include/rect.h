#ifndef RECT_H
#define RECT_H

#include <SDL2/SDL.h>
#include "color.h"

class Rect 
{
public:
	Rect(int origin_x, int origin_y, int dest_x, int dest_y , Color color);
	void draw(SDL_Renderer* screen ) const;
private:
	Color color;
	SDL_Rect rect;
};

#endif
