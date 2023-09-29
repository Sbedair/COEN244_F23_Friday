#include "Person.h"

static int ID_Share = 40000000;

Person::Person(std::string n, Date d, std::string c) {
	Name = n;
	DoB = d;
	Citizenship = c;
	ID_Share++;
	ID = ID_Share;
}

int Person::getAge() {
	return 2023 - DoB.getYear();
}

