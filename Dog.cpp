#include "Dog.h"

Dog::Dog(string _name, string _breed)
{
	name = _name;
	
	if (_breed == "Chihuahua")
		throw runtime_error("Chihuahua's aren't real dogs.");
	else
		breed = _breed;
}

std::string Dog::GetName() const
{
	return name;
}

std::string Dog::GetBreed() const
{
	return breed;
}
