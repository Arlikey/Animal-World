#include "Wildebeest.h"
#include <iostream>
using namespace std;

Wildebeest::Wildebeest() : Herbivore() {
	// Sets as default average wildebeest weight
	weight = 168;
}

Wildebeest::Wildebeest(double weight) : Herbivore() {
	this->weight = weight;
}

void Wildebeest::Eat_Grass() {
	if (life) weight += 10;
}