#pragma once
#include "Player.h"
class Priest : public Player
{
	public:
		Priest(string _name, Race _race);
		string Attack() const;
};

