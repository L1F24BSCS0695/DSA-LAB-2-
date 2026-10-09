#include "LibraryItem.h"
using namespace std;

Book::Book(string t, string a, int p)
{
    title = t;
    author = a;
    pages = p;
}

void Book::display()
{
    cout << "Book: " << title
        << ", Author: " << author
        << ", Pages: " << pages << endl;
}

bool Book::matches(string key)
{
    return title == key;
}

int Book::getSortValue()
{
    return pages;
}

Newspaper::Newspaper(string n, string d, string e)
{
    name = n;
    date = d;
    edition = e;
}

void Newspaper::display()
{
    cout << "Newspaper: " << name << ", Date: " << date << ", Edition: " << edition << endl;
}

bool Newspaper::matches(string key)
{
    return name == key;
}

int Newspaper::getSortValue()
{
    return (edition == "Morning Edition") ? 1 : 2;
}