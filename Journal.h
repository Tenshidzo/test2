#pragma once
#include "Print.h"
class Journal :
    public Print
{
protected:
    int number;
    string month;
public:
    Journal();
    Journal(string published, int year, string name, int number, string month);

    void setNumber(int number);
    void setMonth(string month);

    int getNumber() const;
    string getMonth() const;

    void showInfo() const;

};

