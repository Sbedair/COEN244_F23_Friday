#pragma once
#include <string>

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date();
	Date(int d, int m, int y);
	std::string getDate();
	int getYear();
};

