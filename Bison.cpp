#include "Bison.h"
#include <iostream>
using namespace std;

Bison::Bison() : Herbivore() {
	// Sets as default average bison weight
	weight = 610;
}

Bison::Bison(double weight) : Herbivore() {
	this->weight = weight;
}

void Bison::Set_Life(bool life) {
	this->life = life;
}

void Bison::Eat_Grass() {
	if (life) weight += 10;
}