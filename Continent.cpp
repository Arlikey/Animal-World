#include "Continent.h"

Herbivore* Continent::getHerbivores()
{
	return herbivores;
}

Carnivore* Continent::getCarnivores()
{
	return carnivores;
}

int Continent::getHerbCount()
{
	return herbivoresCount;
}

int Continent::getCarnCount()
{
	return carnivoresCount;
}

Continent::~Continent() {
	delete[] herbivores;
	delete[] carnivores;
}