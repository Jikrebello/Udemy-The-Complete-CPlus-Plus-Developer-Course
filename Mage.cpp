#include "Mage.h"

Mage::Mage(string _name, Race _race) : Player(_name, _race)
{
	hitPoints = 150;
	magicPoints = 150;
}

std::string Mage::Attack() const
{
	return "I will crush you with the power of my arcane missiles!";
}
