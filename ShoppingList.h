#pragma once
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class ShoppingList
{
	public:
		ShoppingList();

	private:
		vector<string> foodName;
		vector<int> foodAmount;
		void AddItem(string _item);
		int IndexOfItem(string _item) const;
		void PrintItemInfo() const;
};

