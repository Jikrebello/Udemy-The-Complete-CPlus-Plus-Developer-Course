#include "STLDequeExample1.h"

STLDequeExample1::STLDequeExample1()
{
	basicDeque.push_back(5);
	basicDeque.push_back(6);
	basicDeque.push_back(7);
	basicDeque.push_back(8);
	cout << "push_back()" << endl;
	PrintDeque(basicDeque);
	cout << endl;
	basicDeque.push_front(9);
	basicDeque.push_front(10);
	basicDeque.push_front(11);
	basicDeque.push_front(12);
	cout << "push_front()" << endl;
	PrintDeque(basicDeque);
	cout << endl;
}

void STLDequeExample1::PrintDeque(deque<int> _deque)
{
	for(int num : _deque)
	{
		cout << num << endl;
	}
}
