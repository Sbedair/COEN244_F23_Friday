#include "Student.h"

Student::Student(std::string m, double g, std::string n, Date dob, std::string c): Person(n, dob, c) {
	major = m;
	GPA = g;

	for (int i = 0; i < 7; i++) {
		courses[i] = nullptr;
	}
}

void Student::UpdateGPA() {

}