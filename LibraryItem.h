#pragma once
#include <iostream>
#include <string>

class LibraryItem
{
public:
    virtual void display() = 0;
    virtual bool matches(string key) = 0;
    virtual int getSortValue() = 0;
    virtual ~LibraryItem() {}
};

class Book : public LibraryItem
{
private:
    string title;
    string author;
    int pages;

public:
    Book(string t = "", string a = "", int p = 0);

    void display();
    bool matches(string key);
    int getSortValue();
};

class Newspaper : public LibraryItem
{
private:
    string name;
    string date;
    string edition;

public:
    Newspaper(string n = "", string d = "", string e = "");

    void display();
    bool matches(string key);
    int getSortValue();
};