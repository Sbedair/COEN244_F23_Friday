#include "Date.h"

Date::Date() {
	day = -1;
	month = -1;
	year = -1;
}
Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

std::string Date::getDate() {
	return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
	
}

int Date::getYear() {
	return year;
}