#pragma once
#include <string>

class Course
{
private:
	std::string code;
	std::string Cname;
	double credits;

public:
	Course(std::string c, std::string cn, double cr);
	double getCredits();
};

