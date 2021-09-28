#include "FileInputAndOutput.h"

FileInputAndOutput::FileInputAndOutput()
{
	vector<string> names;
	vector<int> ages;

	ifstream namesFile;
	ifstream agesFile;
	ofstream nameAndAgesFile;

	string tempName;
	int tempAge;

	cout << "Opening Files..." << endl;

	namesFile.open("names.txt");
	agesFile.open("ages.txt");
	nameAndAgesFile.open("name_and_ages.txt");

	while (!namesFile.eof () && !agesFile.eof ())
	{
		getline(namesFile, tempName);
		agesFile >> tempAge;
		names.push_back(tempName);	// load names into names vector.
		ages.push_back(tempAge);	// load ages into ages vector.
		nameAndAgesFile << tempName << " " << tempAge << endl; // create a new line with name and age.
	}

	for (int i = 0; i < names.size (); i++)
	{
		cout << names[i] << " " << ages[i] << endl; // print what the names_and_ages.txt looks like.
	}

	namesFile.close();
	agesFile.close();
	nameAndAgesFile.close();

	cout << "Files closed" << endl;

}
