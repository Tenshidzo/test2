#include "BookForStudying.h"

BookForStudying::BookForStudying()
{
    appointment = "Undefine";
}

BookForStudying::BookForStudying(string published, int year, string name, string theme, string author, int pages, string appointment)
    :Book(published, year, name, theme, author, pages)
{
    this->appointment = appointment;
}

void BookForStudying::setAppointment(string appointment)
{
    this->appointment = appointment;
}

string BookForStudying::getAppointment() const
{
    return appointment;
}

void BookForStudying::showInfo() const
{
    Book::showInfo();
    cout << "Appointment: " << appointment << endl;
}
