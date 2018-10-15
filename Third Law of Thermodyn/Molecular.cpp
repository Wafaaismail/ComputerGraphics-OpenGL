#include "stdafx.h"
#include "Molecular.h"
#include <stdlib.h>

Molecular::Molecular()
{
}

void Molecular::Randomize()
{
	int flag = 1;

	posY = (rand() % 8) / -10.0;
	if (flag == 1) { posY *= -1; }
	flag *= -1;
	posX = (rand() % 10) / -10.0;
	posZ = -1 * (2 + rand() % 3);
}


Molecular::~Molecular()
{
}
