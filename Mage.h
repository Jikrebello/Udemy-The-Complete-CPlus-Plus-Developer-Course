#pragma once
#include "Player.h"
class Mage : public Player
{
	public:
		Mage(string _name, Race _race);
		string Attack() const;
};

