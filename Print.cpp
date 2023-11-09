#include "Print.h"

Print::Print()
{
    published = "Ukraine";
    year = 2023;
    name = "Undetife";
}

Print::Print(string published, int year, string name)
{
    this->published = published;
    this->year = year;
    this->name = name;
}

void Print::setPublished(string published)
{
    this->published = published;
}

void Print::setYear(int year)
{
    this->year = year;
}

void Print::setName(string name)
{
    this->name = name;
}

string Print::getPublished() const
{
    return published;
}

int Print::getYear() const
{
    return year;
}

string Print::getName() const
{
    return name;
}

void Print::showInfo() const
{
    cout << "Published: " << published << endl;
    cout << "Year: " << year << endl;
    cout << "Name: " << name << endl;
}
