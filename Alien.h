#pragma once
#include <ctime>
#include <random>
using namespace std;
class Alien
{
	public:
		Alien(int _weight, int _height, char _gender);
		int GetWeight() const;
		int GetHeight() const;
		char GetGender() const;
		int GetPrestige();

		// Operator overloads
		bool operator==(const Alien& _otherAlien) const; // checks if they are the same 
		bool operator>(const Alien& _otherAlien) const;
		bool operator<(const Alien& _otherAlien) const;
		Alien operator+(const Alien& _otherAlien) const;
		void operator=(const Alien& _otherAlien);


	private:
		int weight;
		int height;
		char gender;
		int prestigePoints;
};

