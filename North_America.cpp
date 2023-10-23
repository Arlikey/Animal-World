#include "North_America.h"
#include <iostream>
using namespace std;

void North_America::Add_Herbivores() {
	cout << "Enter count of herbivores: ";
	cin >> herbivoresCount;

	herbivores = new Bison[herbivoresCount];

	for (int i = 0; i < herbivoresCount; i++)
	{
		herbivores[i] = Bison(150 + rand() % (250 - 150 + 1));
	}
}

void North_America::Add_Carnivores() {
	cout << "Enter count of carnivores: ";
	cin >> carnivoresCount;

	carnivores = new Wolf[carnivoresCount];

	for (int i = 0; i < carnivoresCount; i++)
	{
		carnivores[i] = Wolf(50 + rand() % (400 - 50 + 1));
	}
}