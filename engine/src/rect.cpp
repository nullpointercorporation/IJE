#include "rect.h"

Rect::Rect(int origin_x, int origin_y, int dest_x, int dest_y ,Color color)
	:  color(color)
{
	this->rect = { origin_x, origin_y, dest_x, dest_y };
}

void
Rect::draw(SDL_Renderer* screen ) const
{
	this->color.use(screen);
	SDL_RenderFillRect( screen, &this->rect );
}
