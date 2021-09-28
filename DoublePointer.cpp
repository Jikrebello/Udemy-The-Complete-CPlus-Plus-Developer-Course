#include "DoublePointer.h"

DoublePointer::DoublePointer()
{
	double myDouble = 3.14;
	double* doublePtr = &myDouble;

	cout << "My double's value (myDouble) is " << myDouble << endl;
	cout << "My double's pointer (doublePtr) value is " << doublePtr << endl;
	cout << "The value that my double pointer (*doublePtr) is holding is " << *doublePtr << endl << endl;

	*doublePtr = *doublePtr * 2;

	cout << "*doublePtr * 2: " << *doublePtr << endl;

	bool* boolPtr = new bool(true);

	cout << "The value of the bool pointer (*boolPtr) is " << boolalpha << *boolPtr << endl;

	delete boolPtr;

	boolPtr = nullptr;

}
