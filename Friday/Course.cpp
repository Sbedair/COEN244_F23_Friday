#include "Course.h"

Course::Course(std::string c, std::string cn, double cr) {
	Cname = cn;
	code = c;
	credits = cr;
}


double Course::getCredits() {
	return credits;
}
