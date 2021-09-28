#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

class WarpDriveOverheating : public overflow_error
{
	public:
		WarpDriveOverheating() : overflow_error("DANGER: Warp drive has exceeded safe temperature tolerance."){}
};