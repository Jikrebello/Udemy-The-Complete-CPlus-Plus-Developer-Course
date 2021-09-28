#include "Priest.h"

Priest::Priest(string _name, Race _race) : Player(_name, _race)
{
	hitPoints = 100;
	magicPoints = 200;
}

std::string Priest::Attack() const
{
	return "I will assault you with Holy Wrath!";
}
