#pragma once
#include <iostream>
#include "Animal.h"
class Cat : public Animal
{
	public:
		Cat(string _name, double _weight, string _breed);
		string GetBreed() const;
		string ClimbTree();
		string AnnoyDog() const;
		string MakeNoise() const;
		string EatFood() const;
	
	private:
		string breed;

};

