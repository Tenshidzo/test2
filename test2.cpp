
#include <iostream>
#include "Journal.h"
#include "BookForStudying.h"
int main()
{
    Print a2("Microsoft", 2004, "C++");
    Journal b("Art House", 1995, "Boock of jungle", 345, "June");
    Book c1("Microsoft", 2015, "C#", "Programming", "Bill Gates", 215);
    BookForStudying a1("Apple", 1995, "Golden Applem", "How to earn money", "Steve Jobs", 150, "Study how to earn money");

    a2.showInfo();
    b.showInfo();
    c1.showInfo();
    a1.showInfo();
}

