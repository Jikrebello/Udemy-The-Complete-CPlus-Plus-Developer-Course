#include "StackExample.h"

StackExample::StackExample(string _inputString)
{
	inputString = _inputString;
	FillReverseStack(inputString);
	PrintResults(inputString);

}

void StackExample::FillReverseStack(string& _inputString)
{
	for(int c : inputString)
	{
		reverseStack.push(c);
	}
}

bool StackExample::IsPalindrome()
{
	bool isPanlinDrome = true;
	
	for(char c : inputString)
	{
		char currChar = reverseStack.top();
		if (currChar != c)
		{
			isPanlinDrome = false;
			break;
		}
		reverseStack.pop();
	}

	return isPanlinDrome;
}


void StackExample::PrintResults(string& _inputString)
{
	if (IsPalindrome())
		cout << inputString << " is a palindrome." << endl;
	else
		cout << inputString << " is not a palindrome." << endl;
}
