#pragma once
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Pizza
{
	public:
		Pizza(string _name, int _diameter, int _cost);
		int GetCost() const;
		void AddTopping(string _toppings);
		void PrintToppings();

	private:
		string name;
		int cost;
		int diameter;
		vector<string> toppings;
};

