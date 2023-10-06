#pragma once
#include "Faculty.h"

class Professor: public Faculty
{
private:
	std::string department;

public:
	Professor(std::string dept, int S, int H, std::string name, Date db, std::string C);
	virtual double CalculateBonus();
	virtual double CalculateSalary();
};

