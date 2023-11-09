#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class Print
{
protected:
	string published;
	int year;
	string name;
public:
	Print();
	Print(string published, int year, string name);

	void setPublished(string published);
	void setYear(int year);
	void setName(string name);

	string getPublished() const;
	int getYear() const;
	string getName() const;

	void showInfo() const;
};

