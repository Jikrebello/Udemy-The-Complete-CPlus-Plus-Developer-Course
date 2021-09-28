#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

class Circle
{
	public:
		Circle();
		Circle(double _radius);
		double GetRadius() const;
		void SetRadius(double _radius);
		double Circumference() const;
		double Area() const;

	private:
		double radius;

};

