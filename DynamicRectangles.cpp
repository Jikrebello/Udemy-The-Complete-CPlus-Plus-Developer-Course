#include "DynamicRectangles.h"

DynamicRectangles::DynamicRectangles()
{
	Rectangle* rect1 = new Rectangle(5, 4);
	Rectangle* rect2 = new Rectangle(3, 5);
	Rectangle* rect3 = new Rectangle(6, 7);

	rectanglePtrArray[0] = rect1;
	rectanglePtrArray[1] = rect2;
	rectanglePtrArray[2] = rect3;

	for (int i = 0; i < 3; i++)
	{
		cout << "Rectangle " << i + 1 << endl;
		cout << "Area: " << rectanglePtrArray[i]->Area() << endl;
		cout << "Perimeter: " << rectanglePtrArray[i]->Perimeter() << endl << endl;
		delete rectanglePtrArray[i];
		rectanglePtrArray[i] = nullptr;
	}
}
