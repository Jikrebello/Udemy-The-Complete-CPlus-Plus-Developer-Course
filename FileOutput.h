#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class FileOutput
{
	public:
		FileOutput();
	
	private:
		void PrintFormatted(ofstream& _ofstream, int _userInput);
};

