#include "Animal_World.h"
#include <iostream>
using namespace std;

void Animal_World::Meals_Herbivores(Continent* continent) {
	Herbivore* herbivores = continent->getHerbivores();
	int size = continent->getHerbCount();
	for (int i = 0; i < size; i++)
	{
		herbivores[i].Eat_Grass();
	}
}

void Animal_World::Nutrition_Carnivores(Continent* continent)
{
	int herbCount = continent->getHerbCount();
	int carnCount = continent->getCarnCount();
	Herbivore* herbivores = continent->getHerbivores();
	Carnivore* carnivores = continent->getCarnivores();
	for (int i = 0; i < carnCount && i < herbCount; i++)
	{
		carnivores[i].Eat(herbivores + i);
	}
}
