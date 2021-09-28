#include "FileDoubling.h"

FileDoubling::FileDoubling()
{
	ifstream numbersFile;
	ofstream doubledNumbersFile;

	int tempNum;

	cout << "Opening Files..." << endl;
	numbersFile.open("numbers.txt");
	doubledNumbersFile.open("doubledNumebers.txt");
	cout << "Files Opened." << endl;

	while (!numbersFile.eof ())
	{
		numbersFile >> tempNum;
		doubledNumbersFile << tempNum * 2 << endl; // double the number and put it in the doubledNumbers.txt
	}

	cout << "Closing Files..." << endl;
	numbersFile.close();
	doubledNumbersFile.close();
	cout << "Files Closed." << endl;
}
