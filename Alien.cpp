#include "Alien.h"

Alien::Alien(int _weight, int _height, char _gender)
{
	weight = _weight;
	height = _height;
	gender = _gender;
}

int Alien::GetWeight() const
{
	return weight;
}

int Alien::GetHeight() const
{
	return height;
}

char Alien::GetGender() const
{
	return gender;
}

int Alien::GetPrestige()
{
	int genderPoints = 0;

	if (gender == 'M')
		genderPoints = 2;
	else if (gender == 'F')
		genderPoints = 3;

	prestigePoints = height * weight * genderPoints;
	
	return prestigePoints;
}


// --- OPERATOR OVERLOADS ---
bool Alien::operator>(const Alien& _otherAlien) const
{
	if (weight > _otherAlien.weight && height > _otherAlien.height)
	{
		return true;
	}

	return false;
}

bool Alien::operator<(const Alien& _otherAlien) const
{
	if (weight < _otherAlien.weight && height < _otherAlien.height)
	{
		return true;
	}

	return false;
}

Alien Alien::operator+(const Alien& _otherAlien) const
{
	int sex = 0;
	char tempSex = 'T';
	srand(time(nullptr));

	// Between 1 and 10.
	sex = rand() % 10 + 1;
	
	if (sex >= 1 && sex <= 3)
		tempSex = 'M';
	else
		tempSex = 'F';

	Alien newAlien = Alien((weight + _otherAlien.weight) / 2, (height + _otherAlien.height) / 2, tempSex);
	return newAlien;
}

void Alien::operator=(const Alien& _otherAlien)
{
	weight = _otherAlien.weight;
	height = _otherAlien.height;
	gender = _otherAlien.gender;
}

bool Alien::operator==(const Alien& _otherAlien) const
{
	return weight == _otherAlien.weight && height == _otherAlien.height && gender == _otherAlien.gender;
}
