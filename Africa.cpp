#include "Africa.h"
#include <iostream>
using namespace std;

void Africa::Add_Herbivores() {
	cout << "Enter count of herbivores: ";
	cin >> herbivoresCount;

	herbivores = new Wildebeest[herbivoresCount];

	for (int i = 0; i < herbivoresCount; i++)
	{
		herbivores[i] = Wildebeest(150 + rand() % (250 - 150 + 1));
	}
}

void Africa::Add_Carnivores() {
	cout << "Enter count of carnivores: ";
	cin >> carnivoresCount;

	carnivores = new Lion[carnivoresCount];

	for (int i = 0; i < carnivoresCount; i++)
	{
		carnivores[i] = Lion(50 + rand() % (400 - 50 + 1));
	}
}