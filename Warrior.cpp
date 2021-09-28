#include "Warrior.h"

Warrior::Warrior(string _name, Race _race) : Player(_name, _race)
{
	hitPoints = 200;
	magicPoints = 0;
}

std::string Warrior::Attack() const
{
	return "I will destroy you with my sword, foul demon!";
}
