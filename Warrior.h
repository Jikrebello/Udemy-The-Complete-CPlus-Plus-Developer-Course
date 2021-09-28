#pragma once
#include "Player.h"
class Warrior : public Player
{
	public:
		Warrior(string _name, Race _race);
		string Attack() const;
};

