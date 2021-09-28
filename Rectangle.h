#pragma once
class Rectangle
{
		friend class RectangleHelper;
		friend void PrintData(Rectangle& _rect);
		friend void ChangeData(Rectangle& _rect);

	public:
		Rectangle();
		Rectangle(int _width, int _height);
		int GetWidth() const;
		int GetHeight() const;
		void SetWidth(int _width);
		void SetHeight(int _height);
		int Area() const;
		int Perimeter() const;

		// ---OPERATOR OVERLOADS---
		bool operator==(const Rectangle& _otherRect) const;
		bool operator!=(const Rectangle& _otherRect) const;
		Rectangle operator+(const Rectangle& _otherRect) const;
		void operator=(const Rectangle& _otherRect);

	private:
		int width;
		int height;
};
