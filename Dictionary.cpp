#include "Dictionary.h"

Dictionary::Dictionary()
{
	AddDefinition("Dog", "Man's best friend.");
	AddDefinition("Fish", "Swims real good.");
	AddDefinition("Monkey", "Return to monke.");
	AddDefinition("Crocodile", "Real scaly hours.");
	string cat = GetDefinition("Cat");

	cout << cat << endl;
	PrintAll();
}

void Dictionary::AddDefinition(string _word, string _definition)
{
	auto newWord = dictionary.find(_word);

	if (newWord != dictionary.end ())
	{
		// changing the definition of a word that already exists.
		newWord->second = _definition;
	}
	else
	{
		// new word, new definition.
		dictionary[_word] = _definition;
	}
}

std::string Dictionary::GetDefinition(string _word) const
{
	auto search = dictionary.find(_word); // Create an iterator to search through the dictionary with the key _word.
	
	if (search != dictionary.end ()) // if we find the word before the end of the dictionary, then return the key-value pair.
	{
		return search->first + ": " + search->second;
	}
	else // if we reach the end of the dictionary, then we didn't find it so then return a message to the user saying not found.
	{
		return "No entry/ definition for the word: " +_word;
	}

}

void Dictionary::PrintAll() const
{
	for (auto entry : dictionary)
	{
		cout << entry.first << ": " << entry.second << endl;
	}
}
