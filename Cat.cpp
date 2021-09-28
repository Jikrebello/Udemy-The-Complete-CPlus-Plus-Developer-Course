#include "Cat.h"

Cat::Cat(string _name, double _weight, string _breed) : Animal(_name, _weight)
{
	breed = _breed;
}

std::string Cat::GetBreed() const
{
	return breed;
}

string Cat::ClimbTree()
{
	return "I'm stuck in a tree lmao";
}


std::string Cat::MakeNoise() const
{
	return "Meow";
}


std::string Cat::EatFood() const
{
	return "Fish tastes good!";
}

std::string Cat::AnnoyDog() const
{
	return "Silly dog!";
}

// Used in main()
//Animal* catPTR = new Cat("Tom", 5.6, "Maine Coon");
//cout << catPTR->MakeNoise() << endl;
//cout << catPTR->EatFood() << endl;

