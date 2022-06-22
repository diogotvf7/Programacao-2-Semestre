#include <iostream>
#include <iomanip>
#include <sstream>

#include "Date2.h"

using namespace std;

int Date::num_days(int year, int month) {
    bool leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0); 
    int days[] = {0, 31, 28 * !leap_year + 29 * leap_year, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return days[month];
}

Date::Date() {year = 1; month = 1; day = 1;}
Date::Date(int year, int month, int day) {

    if ((1 <= day && day <= num_days(year, month)) && (1 <= month && month <= 12) && (1 <= year && year <= 9999)) {

        this->year = year; this->month = month; this->day = day;
    } else {

        this->year = 0; this->month = 0; this->day = 0;
    }
}
Date::Date(const std::string& year_month_day) {
    
    istringstream iss(year_month_day);
    int year, month, day;
    char separator1, separator2;
    iss >> year >> separator1 >> month >> separator2 >> day;
    if ((1 <= day && day <= num_days(year, month)) && (1 <= month && month <= 12) && (1 <= year && year <= 9999) && (separator1 == '/') && (separator2 == '/')) {

        this->year = year; this->month = month; this->day = day;
    } else {

        this->year = 0; this->month = 0; this->day = 0;
    }

}
bool Date::is_valid() const {

    if (day == 0 || month == 0 || year == 0) return false;
    return true;
}