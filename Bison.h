#pragma once
#include "Herbivore.h"
class Bison : public Herbivore
{
public:
	Bison();
	Bison(double weight);
	void Set_Life(bool life);
	void Eat_Grass();
};

