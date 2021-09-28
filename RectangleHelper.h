#pragma once
#include "Rectangle.h"
class RectangleHelper
{
	public:
		void ModifyRectangle(Rectangle& _rect)
		{
			_rect.width = 500;
			_rect.height = 500;
		}
};