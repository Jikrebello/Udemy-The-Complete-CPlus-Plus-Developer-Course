#include "Person.h"

Person::Person(string _name)
{
	SetName(_name);
}

std::string Person::GetName() const noexcept
{
	return name;
}

void Person::SetName(string _name)
{
	if (_name != "John")
	{
		name = _name;
	}
	else
	{
		throw runtime_error("Cannot make a person called John.");
	}
}
