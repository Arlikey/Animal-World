#include "Wolf.h"

Wolf::Wolf() {
	power = 450;
}

Wolf::Wolf(double power) {
	this->power = power;
}

void Wolf::Eat(Herbivore* herbivore) {
	if (!herbivore->isAlive()) {
		return;
	}
	if (power > herbivore->getWeight()) {
		power += 10;
	} else {
		power -= 10;
	}
}