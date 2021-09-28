#include "Player.h"

Player::Player(string _name, Race _race)
{
	name = _name;
	race = _race;
}

std::string Player::GetName() const
{
	return name;
}

void Player::SetName(string _name)
{
	name = _name;
}

Race Player::GetRace() const
{
	return race;
}

void Player::SetRace(Race _race)
{
	race = _race;
}

int Player::GetHitPoints() const
{
	return hitPoints;
}

void Player::SetHitPoints(int _hitpoints)
{
	hitPoints = _hitpoints;
}

int Player::GetMagicPoints() const
{
	return magicPoints;
}

void Player::SetMagicPoints(int _magicPoints)
{
	magicPoints = _magicPoints;
}

std::string Player::WhatRace() const
{
	if (race == Human)
	{
		return "Human";
	}
	else if (race == Elf)
	{
		return "Elf";

	}
	else if (race == Dwarf)
	{
		return "Dwarf";

	}
	else if (race == Orc)
	{
		return "Orc";

	}
	else if (race == Troll)
	{
		return "Troll";
	}
}
