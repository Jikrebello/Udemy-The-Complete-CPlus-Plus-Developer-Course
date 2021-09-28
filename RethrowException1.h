#pragma once
#include <stdexcept>
#include <iostream>
using namespace std;

class RethrowException1
{
	public:
		RethrowException1();
	
	private:
		void ProcessPositive(int _num);
		void ProcessNum(int _num);

};

