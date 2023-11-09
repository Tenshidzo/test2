#include "Book.h"

Book::Book()
{
    theme = "Undefine";
    author = "Undefine";
    pages = 0;
}

Book::Book(string published, int year, string name, string theme, string author, int pages)
    :Print(published, year, name )
{
    this->theme = theme;
    this->author = author;
    this->pages = pages;

}

void Book::setTheme(string theme)
{
    this->theme = theme;
}

void Book::setAuthor(string author)
{
this->author = author;
}

void Book::setPages(int pages)
{
    this->pages = pages;
}

string Book::getTheme() const
{
    return theme;
}

string Book::getAuthor() const
{
    return author;
}

int Book::getPages() const
{
    return pages;
}

void Book::showInfo() const
{
    Print::showInfo();
    cout << "Theme: " << theme << endl;
    cout << "Author: " << author << endl;
    cout << "Pages: " << pages << endl;
    cout << "------------------\n";
}
