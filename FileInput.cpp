#include "FileInput.h"

FileInput::FileInput()
{
	vector<int> fileNumbers;

	ifstream infile;
	infile.open("input.txt");

	int inputNum;
	int sum = 0;

	while (!infile.eof ())
	{
		infile >> inputNum;	// read the number in.
		sum += inputNum;	// add it to the total sum.
		fileNumbers.push_back(inputNum); // load in numbers to a vector.
	}

	for (int i = 0; i < fileNumbers.size (); i++)
	{
		cout << fileNumbers[i] << endl;
	}

	cout << "Sum of the numbers is " << sum << endl;

	infile.close();
}
