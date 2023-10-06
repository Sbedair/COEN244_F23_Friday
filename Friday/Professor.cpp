#include "Professor.h"


Professor::Professor(std::string dept, int S, int H, std::string name, Date db, std::string C):Faculty(S,H,name,db,C) {
	department = dept;
}

double Professor::CalculateBonus() {
	return this->getHours() * 13 * 1.5;
}

double Professor::CalculateSalary() {
	return this->getHours() * 13 * this->getSalary() + CalculateBonus();
}