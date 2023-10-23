#pragma once
class Herbivore
{
protected:
	double weight;
	bool life;
public:
	Herbivore() : life(true), weight(0) {};
	double getWeight();
	bool isAlive();
	virtual void Set_Life(bool life) = 0;
	virtual void Eat_Grass() = 0;
};

