#include "AlgorithmDemo.h"

AlgorithmDemo::AlgorithmDemo(int _specificNum, int _replaceNum, int _numberSize)
{
	specificNum = _specificNum;
	numbersSize = _numberSize;
	replaceNum = _replaceNum;
	FillVector();
	PrintVector();
	CountSpecificNumber(_specificNum);
	ReplaceNumbers();
	PrintVector();
	CountSpecificNumber(_replaceNum);
	SortVector();
	PrintVector();
}

void AlgorithmDemo::FillVector()
{
	int temp = 0;
	srand(time(nullptr));

	for (int i = 0; i < numbersSize; i++)
	{
		temp = rand() % numbersSize + 0;
		numbers.push_back(temp);
	}
}

void AlgorithmDemo::CountSpecificNumber(int _specificNum)
{
	specificNum = _specificNum;
	int numOfSpecificNum = count(numbers.begin(), numbers.end(), specificNum);
	cout << "The amount of times the specific number \"" << specificNum << "\" appeared out of " << numbersSize << " numbers is " << numOfSpecificNum << endl;
}

void AlgorithmDemo::ReplaceNumbers()
{
	cout << endl << "Replacing the \"" << specificNum << "\" with " << replaceNum << endl;
	replace(numbers.begin(), numbers.end(), specificNum, replaceNum);
}

void AlgorithmDemo::SortVector()
{
	cout << "Sorting the vector." << endl;
	sort(numbers.begin(), numbers.end());
}

void AlgorithmDemo::PrintVector()
{
	for (int i = 0; i < numbers.size (); i++)
		cout << numbers[i] << endl;
	
	cout << endl;
}
