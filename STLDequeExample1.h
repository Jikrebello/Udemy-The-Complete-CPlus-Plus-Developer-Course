#pragma once
#include <iostream>
#include <deque>
using namespace std;

class STLDequeExample1
{
	public:
		STLDequeExample1();
	
	private:
		void PrintDeque(deque<int> _deque);
		deque<int> basicDeque;
};

