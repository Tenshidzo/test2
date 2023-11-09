#pragma once
#include "Book.h"
class BookForStudying :
    public Book
{
    string appointment;
public:
    BookForStudying();
    BookForStudying(string published, int year, string name, string theme,
        string author, int pages, string appointment);

    void setAppointment(string appointment);

    string getAppointment() const;

    void showInfo() const;
};

