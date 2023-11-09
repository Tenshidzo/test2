#pragma once
#include "Print.h"
class Book :
    public Print
{
protected:
    string theme;
    string author;
    int pages;
public:
      Book();
      Book(string published, int year, string name, string theme,
          string author, int pages);

      void setTheme(string theme);
      void setAuthor(string author);
      void setPages(int pages);

      string getTheme() const;
      string getAuthor() const;
      int getPages() const;

      void showInfo()const;

};

