#pragma once
#include "LibraryItem.h"

 class Library
{
private:
    LibraryItem* items[10];
    int count;

public:
    Library();

    void addBook(Book& book);
    void addNewspaper(Newspaper& newspaper);
    void displayCollection();
    void sortBooksByPages();
    void sortNewspapersByEdition();

    Book* searchBookByTitle(string title);
    Newspaper* searchNewspaperByName(string name);
};

