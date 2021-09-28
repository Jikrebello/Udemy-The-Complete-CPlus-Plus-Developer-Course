#include "FileOutput.h"

FileOutput::FileOutput()
{
	int userInput;
	cout << "Input the highest number you wish to loop to." << endl;
	cin >> userInput;

	ofstream outfile;

	cout << "Creating and Writing to a file" << endl;

	outfile.open("output.txt");
	outfile << fixed << showpoint;
	cout << fixed << showpoint;

	PrintFormatted(outfile, userInput);

	outfile.close();

	cout << "Done making file." << endl;

}

void FileOutput::PrintFormatted(ofstream& _ofstream, int _userInput)
{
	for (int i = 0; i < _userInput; i++)
	{
		_ofstream << setw(12) << setprecision(2) << (i * 5.7575757575)
			<< setw(12) << setprecision(3) << (i * 3.14159) << endl;

		cout << setw(12) << setprecision(2) << (i * 5.7575757575)
			<< setw(12) << setprecision(3) << (i * 3.14159) << endl;
	}
}


