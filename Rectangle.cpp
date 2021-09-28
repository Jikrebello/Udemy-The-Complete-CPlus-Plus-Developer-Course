#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 0;
	height = 0;
}

Rectangle::Rectangle(int _width, int _height)
{
	width = _width;
	height = _height;
}

int Rectangle::GetWidth() const
{
	return width;
}

int Rectangle::GetHeight() const
{
	return height;
}

void Rectangle::SetWidth(int _width)
{
	width = _width;
}

void Rectangle::SetHeight(int _height)
{
	height = _height;
}

int Rectangle::Area() const
{
	return width * height;
}

int Rectangle::Perimeter() const
{
	return width * 2 + height * 2;
}


// Returns a new rectangle object with a width and height is the sum of the current rectangle object and another rectangle object.
Rectangle Rectangle::operator+(const Rectangle& _otherRect) const
{
	Rectangle sumOfRect = Rectangle(width + _otherRect.width, height + _otherRect.height);
	return sumOfRect;
}

// Sets the values (width and height) of this rectangle obj to the values (width and height) found in _otherRect.
void Rectangle::operator=(const Rectangle& _otherRect)
{
	width = _otherRect.width;
	height = _otherRect.height;
}

// Check if the class object shares the same values and is therefore "equal" to another class object of the same type.
bool Rectangle::operator==(const Rectangle& _otherRect) const
{
	return width == _otherRect.width && height == _otherRect.height;
}

// 
bool Rectangle::operator!=(const Rectangle& _otherRect) const
{
	return width != _otherRect.width || height != _otherRect.height;
}