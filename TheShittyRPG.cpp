#include "TheShittyRPG.h"

TheShittyRPG::TheShittyRPG()
{
	vector<Player*> partyMembers;
	int totalPlayers = 0;
	int tempClass = 0;
	int tempRace = 0;
	string tempName = "";

	cout << "Welcome to \"The Shitty RPG\"!" << endl << "Please enter the size of your adventuring party." << endl;
	cin >> totalPlayers;

	for (int i = 0; i < totalPlayers; i++)
	{
		cout << "Please choose a profession for Adventurer number: " << i + 1 << endl;
		cout << "Enter 1 for a Warrior." << endl;
		cout << "Enter 2 for a Priest." << endl;
		cout << "Enter 3 for a Mage." << endl;
		cin >> tempClass;

		cout << "Please choose a race." << endl;
		cout << "Enter 1 for a Human." << endl;
		cout << "Enter 2 for a Elf." << endl;
		cout << "Enter 3 for a Dwarf." << endl;
		cout << "Enter 4 for a Orc." << endl;
		cout << "Enter 5 for a Troll." << endl;
		cin >> tempRace;

		cout << "Please enter a name." << endl;
		cin >> tempName;

		if (tempClass == 1) // Warrior Class
		{
			if (tempRace == 1)
			{
				Player* player = new Warrior(tempName, Human);
				partyMembers.push_back(player);
			}
			else if (tempRace == 2)
			{
				Player* player = new Warrior(tempName, Elf);
				partyMembers.push_back(player);
			}
			else if (tempRace == 3)
			{
				Player* player = new Warrior(tempName, Dwarf);
				partyMembers.push_back(player);
			}
			else if (tempRace == 4)
			{
				Player* player = new Warrior(tempName, Orc);
				partyMembers.push_back(player);
			}
			else if (tempRace == 5)
			{
				Player* player = new Warrior(tempName, Troll);
				partyMembers.push_back(player);
			}
		}
		else if (tempClass == 2) // Priest Class.
		{
			if (tempRace == 1)
			{
				Player* player = new Priest(tempName, Human);
				partyMembers.push_back(player);
			}
			else if (tempRace == 2)
			{
				Player* player = new Priest(tempName, Elf);
				partyMembers.push_back(player);
			}
			else if (tempRace == 3)
			{
				Player* player = new Priest(tempName, Dwarf);
				partyMembers.push_back(player);
			}
			else if (tempRace == 4)
			{
				Player* player = new Priest(tempName, Orc);
				partyMembers.push_back(player);
			}
			else if (tempRace == 5)
			{
				Player* player = new Priest(tempName, Troll);
				partyMembers.push_back(player);
			}
		}
		else if (tempClass == 3) // Mage Class.
		{
			if (tempRace == 1)
			{
				Player* player = new Mage(tempName, Human);
				partyMembers.push_back(player);
			}
			else if (tempRace == 2)
			{
				Player* player = new Mage(tempName, Elf);
				partyMembers.push_back(player);
			}
			else if (tempRace == 3)
			{
				Player* player = new Mage(tempName, Dwarf);
				partyMembers.push_back(player);
			}
			else if (tempRace == 4)
			{
				Player* player = new Mage(tempName, Orc);
				partyMembers.push_back(player);
			}
			else if (tempRace == 5)
			{
				Player* player = new Mage(tempName, Troll);
				partyMembers.push_back(player);
			}
		}
	}

	for (int i = 0; i < partyMembers.size(); i++)
	{
		if (partyMembers[i]->GetHitPoints() == 200)
		{
			cout << "My name is " << partyMembers[i]->GetName() << ", and I'm a Warrior " << partyMembers[i]->WhatRace() << "." << endl << "My attack is : " << partyMembers[i]->Attack () << endl;
		}
		else if (partyMembers[i]->GetHitPoints() == 100)
		{
			cout << "My name is " << partyMembers[i]->GetName() << ", and I'm a Priest " << partyMembers[i]->WhatRace() << "." << endl << "My attack is: " << partyMembers[i]->Attack() << endl;
		}
		else if (partyMembers[i]->GetHitPoints() == 150)
		{
			cout << "My name is " << partyMembers[i]->GetName() << ", and I'm a Mage " << partyMembers[i]->WhatRace() << "." << endl << "My attack is: " << partyMembers[i]->Attack() << endl;
		}
	}

	partyMembers.clear();
}
