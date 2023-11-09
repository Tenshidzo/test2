#include "Journal.h"

Journal::Journal()
{
    number = 0;
    month = "0";
}

Journal::Journal(string published, int year, string name,
    int number, string month)
    :Print(published, year, name)
{
    this->number = number;
    this->month = month;
}

void Journal::setNumber(int number)
{
    this->number = number;
}

void Journal::setMonth(string month)
{
    this->month = month;
}

int Journal::getNumber() const
{
    return number;
}

string Journal::getMonth() const
{
    return month;
}

void Journal::showInfo() const
{
    Print::showInfo();
    cout << "Number: " << number << endl;
    cout << "Month: " << month << endl;
    cout << "----------------\n";
}
