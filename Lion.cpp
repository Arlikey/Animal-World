#include "Lion.h"

Lion::Lion() {
	power = 300;
}

Lion::Lion(double power) {
	this->power = power;
}

bool Lion::Eat(Herbivore* herbivore) {
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