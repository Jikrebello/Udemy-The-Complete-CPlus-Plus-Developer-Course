#include "DynamicFileRectangle.h"

DynamicFileRectangle::DynamicFileRectangle()
{
	ifstream rectangleDimensionsFile;
	ofstream rectangleAdditionalDimensionsFile;

	vector<Rectangle*> rectanglePTRs;
	vector<Rectangle> rectangles;
	int width;
	int height;

	rectangleDimensionsFile.open("rectangles.txt");
	while (rectangleDimensionsFile >> width >> height) // gets both the width and height from a single line separated by a white space.
	{
		Rectangle* dynamicRect = new Rectangle(width, height);
		
		Rectangle rect(width, height);

		rectanglePTRs.push_back(dynamicRect);
		
		rectangles.push_back(rect);
	}
	rectangleDimensionsFile.close();
	
	rectangleAdditionalDimensionsFile.open("rectangleAdditionalDimensions.txt");
	// USING POINTERS (Gets put on the HEAP, and therefore rectanglePTR (and its rectangle objects inside) will exist outside the scope/ lifetime of this method.)
	for (int i = 0; i < rectanglePTRs.size (); i++)
	{
		cout << "Rectangle " << i + 1 << endl;
		rectangleAdditionalDimensionsFile << "Rectangle " << i + 1 << endl;

		cout << "Width of rectangle: " << rectanglePTRs[i]->GetWidth() << endl;
		rectangleAdditionalDimensionsFile << "Width of rectangle: " << rectanglePTRs[i]->GetWidth() << endl;
		
		cout << "Height of rectangle: " << rectanglePTRs[i]->GetHeight() << endl;
		rectangleAdditionalDimensionsFile << "Height of rectangle: " << rectanglePTRs[i]->GetHeight() << endl;
		
		cout << "Area of rectangle: " << rectanglePTRs[i]->Area() << endl;
		rectangleAdditionalDimensionsFile << "Area of rectangle: " << rectanglePTRs[i]->Area() << endl;
		
		cout << "Perimeter of rectangle: " << rectanglePTRs[i]->Perimeter() << endl << endl;
		rectangleAdditionalDimensionsFile << "Perimeter of rectangle: " << rectanglePTRs[i]->Perimeter() << endl << endl;

		delete rectanglePTRs[i];	// Manually freeing up the HEAP.
	}
	// DOING IT NORMALLY (Goes on the stack, which means that it'll only exist within the scope of this method and will be popped off the stack as soon as it returns)
	for (int i = 0; i < rectangles.size(); i++)
	{
		cout << "Rectangle " << i + 1 << endl;
		rectangleAdditionalDimensionsFile << "Rectangle " << i + 1 << endl;

		cout << "Width of rectangle: " << rectangles[i].GetWidth() << endl;
		rectangleAdditionalDimensionsFile << "Width of rectangle: " << rectangles[i].GetWidth() << endl;

		cout << "Height of rectangle: " << rectangles[i].GetHeight() << endl;
		rectangleAdditionalDimensionsFile << "Height of rectangle: " << rectangles[i].GetHeight() << endl;

		cout << "Area of rectangle: " << rectangles[i].Area() << endl;
		rectangleAdditionalDimensionsFile << "Area of rectangle: " << rectangles[i].Area() << endl;

		cout << "Perimeter of rectangle: " << rectangles[i].Perimeter() << endl << endl;
		rectangleAdditionalDimensionsFile << "Perimeter of rectangle: " << rectangles[i].Perimeter() << endl << endl; // at the end of this method, the vector and its rectangle objects will be popped of this stack and you wont be able to access them elsewhere.
	}
	rectangleAdditionalDimensionsFile.close();
	rectanglePTRs.clear(); 
}
