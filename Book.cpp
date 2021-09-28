#include "Book.h"

Book::Book(string _author, string _title, string _genre, int _pageTotal)
{
	author = _author;
	title = _title;
	genre = _genre;
	pageTotal = _pageTotal;
}

string Book::GetAuthor() const
{
	return author;
}

string Book::GetTitle() const
{
	return title;
}

string Book::GetGenre() const
{
	return genre;
}

int Book::GetPageTotal() const
{
	return pageTotal;
}

void Book::PrintDetails() const
{
	cout << "The Book is called " << title << " written by " << author << " under the genre of " << genre << " with a total of " << pageTotal << " pages." << endl;
}
