#include "DynamicArraysAndDynamicCircles.h"

DynamicArraysAndDynamicCircles::DynamicArraysAndDynamicCircles()
{
	int numOfCircles = 0;
	int radius = 0;

	cout << "How many circles do you want?" << endl;
	cin >> numOfCircles;

	Circle** circles = new Circle * [numOfCircles];

	cout << "Give Radius of Circle 1" << endl;
	cin >> radius;
	circles[0] = new Circle(radius);
	cout << "Area: " << circles[0]->Area() << endl;
	cout << "Circumference: " << circles[0]->Circumference() << endl;

	cout << "Give Radius of Circle 2" << endl;
	cin >> radius;
	circles[1] = new Circle(radius);
	cout << "Area: " << circles[1]->Area() << endl;
	cout << "Circumference: " << circles[1]->Circumference() << endl;

	cout << "Give Radius of Circle 3" << endl;
	cin >> radius;
	circles[2] = new Circle(radius);
	cout << "Area: " << circles[2]->Area() << endl;
	cout << "Circumference: " << circles[2]->Circumference() << endl;

	delete circles[0];
	delete circles[1];
	delete circles[2];

	circles[0] = nullptr;
	circles[1] = nullptr;
	circles[2] = nullptr;

	delete[] circles;
	circles = nullptr;
}
