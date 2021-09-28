#include "QueueDemo.h"

QueueDemo::QueueDemo()
{
	queue<string> queueNames;

	queueNames.push("John");
	queueNames.push("Sally");
	queueNames.push("Bob");
	queueNames.push("Sam");
	queueNames.push("Ali");
	queueNames.push("Karen");
	
	while (!queueNames.empty ())
	{
		cout << queueNames.front() << endl;
		queueNames.pop();
	}

}
