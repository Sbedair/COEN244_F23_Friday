#pragma once
#include "Person.h"
#include "Course.h"

class Student: public Person
{
private:
	std::string major;
	double GPA;
	Course* courses[7];

public:
	Student(std::string m, double g, std::string n, Date dob, std::string c);
	void UpdateGPA();
};

