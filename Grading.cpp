#include "Grading.h"

Grading::Grading()
{
	int input;
	string letterGrade;

	cout << "Type in the percentage of your test." << endl;
	cin >> input;
	percentRange = input;

	try
	{
		letterGrade = GetLetterGrade(percentRange);
		cout << "Your grade symbol for " << percentRange << " is " << letterGrade << endl;
	}
	catch (const out_of_range& err)
	{
		cout << err.what() << endl;
	}
}

std::string Grading::GetLetterGrade(int _percentRange)
{
	if (_percentRange < 0 || _percentRange > 100)
	{
		throw out_of_range("Your percentage must be within 0 and 100 inclusive.");
	}
	else if (_percentRange < 50)
	{
		return "F";
	}
	else if (_percentRange >= 50 && _percentRange <= 59)
	{
		return "D";
	}
	else if(_percentRange >= 60 && _percentRange <= 69)
	{
		return "C";
	}
	else if (_percentRange >= 70 && _percentRange <= 79)
	{
		return "B";
	}
	else if (_percentRange >= 80 && _percentRange <= 89)
	{
		return "A";
	}
	else if (_percentRange >= 90 && _percentRange <= 100)
	{
		return "A+";
	}

}
