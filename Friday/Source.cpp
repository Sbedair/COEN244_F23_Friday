#include <iostream>
#include "Professor.h"
#include "Student.h"

using namespace std;

int main() {
	Date* dt = new Date(5, 9, 2018);

	Faculty* P1 = new Professor("ECE",80,5,"Jonathan", *dt, "MURIKAAA");
	
	cout << P1->CalculateBonus();
	cout << "\nProfessor is owed a total of " << P1->CalculateSalary();

}