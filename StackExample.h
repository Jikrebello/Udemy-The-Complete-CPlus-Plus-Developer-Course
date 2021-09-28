#pragma once
#include <stack>
#include <string>
#include <iostream>
using namespace std;

class StackExample
{
	public:
		StackExample(string _inputString);
		void PrintResults(string& _inputString);
		
	private:
		string inputString;
		stack<char> reverseStack;
		bool IsPalindrome();
		void FillReverseStack(string& _inputString);
};

