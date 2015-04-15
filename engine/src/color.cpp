#include "color.h"

Color::Color(int red, int blue, int green, int alpha)
	: red(red) , blue(blue), green(green), alpha(alpha)
{
}

void
Color::use( SDL_Renderer* screen) const
{
	SDL_SetRenderDrawColor( screen, this->red, this->blue, this->green, this->alpha );
}

