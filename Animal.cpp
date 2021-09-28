#include "Animal.h"

Animal::Animal(string _name, double _weight)
{
	name = _name;
	weight = _weight;
}

std::string Animal::GetName() const
{
	return name;
}

void Animal::SetName(string _name)
{
	name = _name;
}

double Animal::GetWeight() const
{
	return weight;
}

void Animal::SetWeight(double _weight)
{
	weight = _weight;
}
