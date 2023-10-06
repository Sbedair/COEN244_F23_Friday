#pragma once
#include "Person.h"

class Faculty: public Person
{
private:
	double Salary;
	int Hours;

public:
	Faculty(int S, int H, std::string name, Date db, std::string C);
	virtual double CalculateBonus() = 0;
	virtual double CalculateSalary() { return Salary * Hours * 13; }
	int getHours() { return Hours; }
	int getSalary() { return Salary; }
};

