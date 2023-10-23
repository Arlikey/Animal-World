#pragma once
#include "Carnivore.h"
class Wolf : public Carnivore
{
public:
	Wolf();
	Wolf(double power);
	void Eat(Herbivore* herbivore);
};

