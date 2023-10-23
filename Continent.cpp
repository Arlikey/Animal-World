#include "Continent.h"

Continent::~Continent() {
	delete[] herbivores;
	delete[] carnivores;
}