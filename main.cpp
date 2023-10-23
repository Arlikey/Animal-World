#include <iostream>
#include "Animal_World.h"
#include "Africa.h"
#include "North_America.h"
using namespace std;

int main() {
	srand(time(0));

	int userChoice;
	cout << "Enter a continent:\n\t1. Africa.\n\t2. North America." << endl;
	cout << "--> ";
	cin >> userChoice;

	Continent* continent;

	switch (userChoice)
	{
	case 1:
		continent = new Africa();
		continent->Add_Herbivores();
		continent->Add_Carnivores();
		break;
	case 2:
		continent = new North_America();
		continent->Add_Herbivores();
		continent->Add_Carnivores();
		break;
	default:
		continent = nullptr;
		break;
	}

	Animal_World animals;
	animals.Meals_Herbivores(continent);
	animals.Nutrition_Carnivores(continent);

	delete continent;

	return 0;
}