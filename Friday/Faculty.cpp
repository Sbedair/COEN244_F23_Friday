#include "Faculty.h"

Faculty::Faculty(int S, int H, std::string name, Date db, std::string C): Person(name,db,C) {
	Salary = S;
	Hours = H;
}