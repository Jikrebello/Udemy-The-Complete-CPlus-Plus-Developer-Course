#include "Circle.h"

Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double _radius)
{
	radius = _radius;
}

double Circle::GetRadius() const
{
	return radius;
}

void Circle::SetRadius(double _radius)
{
	radius = _radius;
}

double Circle::Circumference() const
{
	return 2 * M_PI * radius;
}

double Circle::Area() const
{
	return M_PI * (radius * radius);
}
