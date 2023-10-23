#pragma once
#include "Herbivore.h"
class Carnivore
{
protected:
	double power;
public:
	double getPower();
	virtual bool Eat(Herbivore* herbivore) = 0;
};

