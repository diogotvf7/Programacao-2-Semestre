#include <iostream>
#include <iomanip>
#include <sstream>

#include "Date3.h"

using namespace std;

int Date::num_days(int year, int month) {
    int nofdays[] = {0, 31, 28 * !((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0) + 29 * ((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return nofdays[month];
}

Date::Date() {

    yyyymmdd = "00010101";
}
Date::Date(int year, int month, int day) {
    
    ostringstream oss;

    if (year >= 1 && year <= 9999) {
        oss.fill('0'); oss.width(4); oss << year;
    }
    else {yyyymmdd = "00000000"; return;}

    if (month >= 1 && month <= 12) {
        oss.fill('0'); oss.width(2); oss << month;
    }
    else {yyyymmdd = "00000000"; return;}

    if (day >= 1 && day <= num_days(year, month)) {
        oss.fill('0'); oss.width(2); oss << day;
    }
    else {yyyymmdd = "00000000"; return;}  

    yyyymmdd = oss.str();   
}
Date::Date(const std::string& year_month_day) {

    istringstream iss(year_month_day);
    int year, month, day;
    char sep1, sep2;
    iss >> year >> sep1 >> month >> sep2 >> day;
    
    ostringstream oss;
    
    if (year >= 1 && year <= 9999 && sep1 == '/' && sep2 == '/') {
        oss.fill('0'); oss.width(4); oss << year;
    }
    else {yyyymmdd = "00000000"; return;}

    if (month >= 1 && month <= 12 && sep1 == '/' && sep2 == '/') {
        oss.fill('0'); oss.width(2); oss << month;
    }
    else {yyyymmdd = "00000000"; return;}

    if (day >= 1 && day <= num_days(year, month) && sep1 == '/' && sep2 == '/') {
        oss.fill('0'); oss.width(2); oss << day;
    }
    else {yyyymmdd = "00000000"; return;}  

    yyyymmdd = oss.str();
}
bool Date::is_valid() const {

    return yyyymmdd != "00000000";
}


int main() {
	
    return 0;
}