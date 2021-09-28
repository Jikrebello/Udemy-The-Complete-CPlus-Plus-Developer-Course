#pragma once
#include <map>
#include <string>
#include <iostream>
using namespace std;

class Dictionary
{
	public:
		Dictionary();
		void AddDefinition(string _word, string _definition);
		string GetDefinition(string _word) const;
		void PrintAll() const;

	private:
		map<string, string> dictionary;
		map<string, string>::iterator it;
};

