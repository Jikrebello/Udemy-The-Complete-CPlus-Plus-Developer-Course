#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

class Grading
{
	public:
		Grading();

	private:
		int percentRange;
		string GetLetterGrade(int _percentRange);
};

