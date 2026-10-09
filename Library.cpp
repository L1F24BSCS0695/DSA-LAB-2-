#include "Library.h"
Library::Library()
{
    count = 0;
}

void Library::addBook(Book& book)
{
    if (count < 10)
        items[count++] = new Book(book);
}

void Library::addNewspaper(Newspaper& newspaper)
{
    if (count < 10)
        items[count++] = new Newspaper(newspaper);
}

void Library::displayCollection()
{
    for (int i = 0; i < count; i++)
        items[i]->display();
}

void Library::sortBooksByPages()
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (items[i]->getSortValue() >
                items[j]->getSortValue())
            {
                LibraryItem* temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
}

void Library::sortNewspapersByEdition()
{
    sortBooksByPages();
}

Book* Library::searchBookByTitle(string title)
{
    for (int i = 0; i < count; i++)
    {
        Book* book = dynamic_cast<Book*>(items[i]);

        if (book != nullptr && book->matches(title))
            return book;
    }

    return nullptr;
}

Newspaper* Library::searchNewspaperByName(string name)
{
    for (int i = 0; i < count; i++)
    {
        Newspaper* paper =
            dynamic_cast<Newspaper*>(items[i]);

        if (paper != nullptr && paper->matches(name))
            return paper;
    }

    return nullptr;
}
