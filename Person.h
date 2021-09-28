#pragma once
#include <string>
#include <stdexcept>

using namespace std;

class Person
{
	public:
		Person(string _name);
		string GetName() const noexcept;
		void SetName(string _name);

	private:
		string name;

};

