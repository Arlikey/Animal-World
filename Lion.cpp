#include "Lion.h"

Lion::Lion() {
	power = 300;
}

Lion::Lion(double power) {
	this->power = power;
}

void Lion::Eat(Herbivore* herbivore) {
	if (!herbivore->isAlive()) {
		return;
	}
	if (power > herbivore->getWeight()) {
		power += 10;
	} else {
		power -= 10;
	}
}