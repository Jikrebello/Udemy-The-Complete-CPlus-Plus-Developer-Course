#pragma once
#include <string>
using namespace std;

enum Race
{
	Human, 
	Elf,
	Dwarf,
	Orc,
	Troll
};

class Player
{
	public:
		Player(string _name, Race _race);
		string GetName() const;
		void SetName(string _name);
		Race GetRace() const;
		void SetRace(Race _race);
		int GetHitPoints() const;
		void SetHitPoints(int _hitpoints);
		int GetMagicPoints() const;
		void SetMagicPoints(int _magicPoints);
		string WhatRace() const;
		virtual string Attack() const = 0;


	protected:
		string name;
		Race race;
		int hitPoints;
		int magicPoints;

};

