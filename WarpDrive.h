#pragma once
#include <iostream>
#include <stdexcept>
#include "WarpDriveOverheating.h"
using namespace std;

class WarpDrive
{
	public:
		WarpDrive();
	
	private:
		void CheckWarpDriveTemperature(int _temperature);
};

