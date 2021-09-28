#include "ShoppingList.h"

ShoppingList::ShoppingList()
{
	string tempName;

	ifstream shoppingListFile;
	shoppingListFile.open("shoppingList.txt");
	while (shoppingListFile >> tempName)
	{
		AddItem(tempName);
	}
	shoppingListFile.close();
	PrintItemInfo();
}

void ShoppingList::AddItem(string _item)
{
	int index = IndexOfItem(_item);

	if (index != -1)
	{
		// Item already exists.
		foodAmount[index]++;
	}
	else
	{
		// New item.
		foodName.push_back(_item);
		foodAmount.push_back(1);
	}
}

void ShoppingList::PrintItemInfo() const
{
	for (int i = 0; i < foodName.size (); i++)
	{
		cout << foodName[i] << ": " << foodAmount[i] << endl;
	}
}

int ShoppingList::IndexOfItem(string _item) const
{
	int resultIndex = -1; // assume we haven't found the item at the beginning of the search.

	for (int i = 0; i < foodName.size (); i++)
	{
		if (_item == foodName.at (i))
		{
			resultIndex = i; // if the item is equal to the value found at the index in the foodAmount, return the index so it can be incremented at the right index in the foodAmount Vector.
			break;
		}
	}

	return resultIndex; // return the resultInex either at the index that the item is in foodName, or return -1 so AddItem() can create a new record for the food item.
}
