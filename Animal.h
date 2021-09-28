#pragma once
#include <string>
using namespace std;

class Animal
{
	public:
		Animal(string _name, double _weight);
		string GetName() const;
		void SetName(string _name);
		double GetWeight() const;
		void SetWeight(double _weight);
		virtual string MakeNoise() const = 0;
		virtual string EatFood() const = 0;

	private:
		string name;
		double weight;

};

