#include "SmartPointersDemo.h"

SmartPointersDemo::SmartPointersDemo()
{
	unique_ptr<double> doublePtr = make_unique<double>();
	*doublePtr = 3.14;
	cout << "doublePtr value: " << *doublePtr << endl;
	auto otherdoublePtr = move(doublePtr);
	cout << "otherdoublePtr: " <<*otherdoublePtr << endl;

	auto doubleArrayPtr = make_unique<double[]>(5);

	doubleArrayPtr[0] = 1;
	doubleArrayPtr[1] = 3;
	doubleArrayPtr[2] = 5;
	doubleArrayPtr[3] = 7;
	doubleArrayPtr[4] = 9;

	for (int i = 0; i < 5; i++)
	{
		cout << doubleArrayPtr[i] << endl;
	}

}
