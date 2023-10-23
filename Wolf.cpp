#include "Wolf.h"

Wolf::Wolf() {
	power = 450;
}

Wolf::Wolf(double power) {
	this->power = power;
}

bool Wolf::Eat(Herbivore* herbivore) {
	if (!herbivore->isAlive()) {
		return false;
	}
	if (power > herbivore->getWeight()) {
		power += 10;
		herbivore->Set_Life(false);
	} else {
		power -= 10;
	}
	return true;
}