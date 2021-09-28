#include "ExceptionClass.h"

ExceptionClass::ExceptionClass()
{
	try
	{
		myNums.resize(myNums.max_size() + 1);
	}
	catch (const length_error& err)
	{
		cout << err.what() << endl;
	}
	
	

}
