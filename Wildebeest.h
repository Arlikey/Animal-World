#pragma once
#include "Herbivore.h"
class Wildebeest : public Herbivore
{
public:
	Wildebeest();
	Wildebeest(double weight);
	void Set_Life(bool life);
	void Eat_Grass();
};

