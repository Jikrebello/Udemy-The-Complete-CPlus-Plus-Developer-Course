#include "ConstCorrectness.h"

ConstCorrectness::ConstCorrectness()
{
	noConstPtrToNonConstData();
	cout << endl;

	constPtrToNonConstData();
	cout << endl;

	nonConstPtrToConstData();
	cout << endl;

	constPtrToConstData();
	cout << endl;

	noChange(myConstDouble);
	myConstDouble = nullptr;
}

/// <summary>
/// Neither is a constant (both can be changed).
/// </summary>
void ConstCorrectness::noConstPtrToNonConstData()
{
	cout << "In noConstPtrToNonConstData()" << endl;

	int* intPtr = new int(50);
	cout << "	Original Value: " << *intPtr << endl;
	cout << "	Original Address: " << intPtr << endl;

	*intPtr = 100;
	cout << "	Changed Value: " << *intPtr << endl;
	cout << "	Address of Changed Value: " << intPtr << endl;

	delete intPtr;
	intPtr = nullptr;

	intPtr = new int(125);
	cout << "	New int and intPtr entirely: " << *intPtr << endl;
	cout << "	Address of new pointer: " << intPtr << endl;


	delete intPtr;
}

/// <summary>
/// Pointer is a constant (can't be changed).
/// Data is not a constant (can be changed).
/// </summary>
void ConstCorrectness::constPtrToNonConstData()
{
	cout << "In constPtrToNonConstData()" << endl;

	int* const intPtr = new int(100);
	cout << "	Original Value: " << *intPtr << endl;
	
	*intPtr = 250;
	cout << "	New integer value: " << *intPtr << endl;

	delete intPtr;

	//inPtr = new int(222); // ERROR! ptr is a constant.
}

/// <summary>
/// pointer is not a constant (can be changed)
/// Data is a constant (can't be changed)
/// </summary>
void ConstCorrectness::nonConstPtrToConstData()
{
	cout << "In nonConstPtrToConstData()" << endl;

	const int* intPtr = new int(500);
	cout << "	Original Value: " << *intPtr << endl;

	delete intPtr;

	intPtr = new int(333); // THIS IS OK! You are changing the memory address of the pointer.

	//*intPtr = 1000; // ERROR! data is a constant.
	
	delete intPtr;

}

void ConstCorrectness::constPtrToConstData()
{
	cout << "In constPtrToConstData()" << endl;

	const int* const intPtr = new int(999);
	cout << "	Original Address: " << intPtr << endl;
	cout << "	Original Value: " << *intPtr << endl;

	//intPtr = new int(666); // ERROR! Can't change the pointer address.
	//*intPtr = 222; // ERROR! Can't change the data value.

	delete intPtr;
}

void ConstCorrectness::noChange(const double* const _constDouble)
{
	cout << *_constDouble << endl;

	delete _constDouble;
}
