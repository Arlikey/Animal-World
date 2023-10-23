#pragma once
class Herbivore
{
protected:
	double weight;
	bool life;
public:
	Herbivore() : life(true), weight(0) {};
	bool isAlive();
	virtual void Eat_Grass() = 0;
};

