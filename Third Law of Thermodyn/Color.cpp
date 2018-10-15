#include "stdafx.h"
#include "Color.h"
#include <iostream>
#include <stdlib.h>

Color::Color()
{
}


Color::~Color()
{
}

void Color::setColors(float r, float g, float b)
{
	red = r;
	green = g;
	blue = b;
	//cout << "class : " << red << "  " << green << "  " << blue << endl;
}
