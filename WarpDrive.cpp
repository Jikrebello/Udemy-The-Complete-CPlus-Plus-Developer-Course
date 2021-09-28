#include "WarpDrive.h"

WarpDrive::WarpDrive()
{
	int temperature;
	try
	{
		cout << "Please pass in the current temperature of the warp drive." << endl;
		cin >> temperature;
		CheckWarpDriveTemperature(temperature);
	}
	catch (const WarpDriveOverheating& err)
	{
		cout << err.what() << endl;
	}
}

void WarpDrive::CheckWarpDriveTemperature(int _temperature)
{
	if (_temperature <= 80)
	{
		cout << "SAFE: Warp drive is within safe temperature tolerance: " << _temperature << endl;
	}
	else
	{
		throw WarpDriveOverheating();
	}
}
