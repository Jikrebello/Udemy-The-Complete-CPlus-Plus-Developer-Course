#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book
{
	public:
		Book(string _author, string _title, string _genre, int _pageTotal);
		string GetAuthor() const;
		string GetTitle() const;
		string GetGenre() const;
		int GetPageTotal() const;
		void PrintDetails() const;

	private:
		string author;
		string title;
		string genre;
		int pageTotal;
};

