#include "RethrowException1.h"

RethrowException1::RethrowException1()
{
	int input;

	try
	{
		cout << "Enter a number to process" << endl;
		cin >> input;
		ProcessNum(input);
		cout << "Constructor was able to process that value" << endl;
	}
	catch (const invalid_argument& err)
	{
		cout << "Constructor says there's an issue with the input value." << endl;
		cout << err.what() << endl;
	}
	catch(const out_of_range& err)
	{
		cout << "Constructor says there's an issue with the input value." << endl;
		cout << err.what() << endl;
	}
}

void RethrowException1::ProcessNum(int _num)
{
	try
	{
		ProcessPositive(_num);
		cout << "Yay! ProcessNum(int _num) could process that value." << endl;
	}
	catch (const invalid_argument& err)
	{
		cout << "ProcessNum(int _num) could not process that number" << endl;
		throw; // rethrows the exception.
	}
	catch(const out_of_range& err)
	{
		cout << "ProcessNum(int _num) could not process that number" << endl;
		throw;
	}
}

void RethrowException1::ProcessPositive(int _num)
{
	cout << "Welcome to the positive integer number processor!" << endl;
	
	if (_num >= 0 && _num < 100)
	{
		cout << "Good job!, You passed in a positive number less than 100 to ProcessPositive(int _num) method." << endl;
	}
	else
	{
		if (_num < 0)
		{
			throw invalid_argument("Negative number entered, must be 0 or greater.");
		}
		else if (_num >= 100)
		{
			throw out_of_range("The number is greater than 100");
		}
	}
}