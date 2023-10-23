#pragma once
#include "Carnivore.h"
class Lion : public Carnivore
{
public:
	Lion();
	Lion(double power);
	void Eat(Herbivore* herbivore);
};

