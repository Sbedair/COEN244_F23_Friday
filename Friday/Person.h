#pragma once
#include "Date.h"

class Person
{
private:
	std::string Name;
	Date DoB;
	std::string Citizenship;
	int ID;

public:
	Person(std::string n, Date d, std::string c);
	int getAge();
};

