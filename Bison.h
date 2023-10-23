#pragma once
#include "Herbivore.h"
class Bison : public Herbivore
{
public:
	Bison();
	Bison(double weight);
	void Eat_Grass();
};

