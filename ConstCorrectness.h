#pragma once
#include <iostream>
using namespace std;

class ConstCorrectness
{
	public:
		ConstCorrectness();

	private:
		const double* myConstDouble = new double(3.14);
		void noConstPtrToNonConstData(); // Non constant pointer to non constant data.
		void constPtrToNonConstData(); // Constant pointer to non constant data.
		void nonConstPtrToConstData(); // Non constant pointer to constant data.
		void constPtrToConstData(); // Constant Pointer to constant data.
		void noChange(const double* const _constDouble);
};

