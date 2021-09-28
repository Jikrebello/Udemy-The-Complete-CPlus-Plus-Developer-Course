#include "MapDemo.h"

MapDemo::MapDemo()
{
	map<string, string> contactBook;

	contactBook["John Bob"] = "082-559-1234";
	contactBook["Jim Billy"] = "082-123-5678";
	contactBook["Sam Jones"] = "083-321-6754";
	contactBook["Bob John"] = "079-654-0288";

	for (auto contact : contactBook)
	{
		cout << contact.first << ": " << contact.second << endl;
	}
}
