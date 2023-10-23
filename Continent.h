#pragma once
#include "Herbivore.h"
#include "Carnivore.h"
class Continent
{
protected:
	Herbivore* herbivores;
	Carnivore* carnivores;
	int herbivoresCount;
	int carnivoresCount;
public:
	virtual void Add_Herbivores() = 0;
	virtual void Add_Carnivores() = 0;
	~Continent();
};

