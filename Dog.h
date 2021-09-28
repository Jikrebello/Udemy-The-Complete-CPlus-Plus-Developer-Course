#pragma once
#include <string>
#include <stdexcept>
using namespace std;
class Dog
{
	public:
		Dog(string _name, string _breed);
		string GetName() const;
		string GetBreed() const;

	private:
		string name;
		string breed;
};

