#include <iostream>
#include <iomanip>
#include <sstream>

#include "Date3.h"

using namespace std;

int Date::num_days(int year, int month) {
    bool leap_year = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0); 
    int days[] = {0, 31, 28 * !leap_year + 29 * leap_year, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return days[month];
}
Date::Date() {yyyymmdd = "00010101";}
Date::Date(int year, int month, int day) {

    if ((1 <= day && day <= num_days(year, month)) && (1 <= month && month <= 12) && (1 <= year && year <= 9999)) {

        ostringstream oss;
        oss.fill('0');
        oss.width(4);
        oss << year;
        oss.width(2);
        oss << month;
        oss.width(2);
        oss << day;
        yyyymmdd = oss.str();

    } else {

        yyyymmdd = "00000000";
    }
}
Date::Date(const std::string& year_month_day) {
    
    istringstream iss(year_month_day);
    int year, month, day;
    char separator1, separator2;
    iss >> year >> separator1 >> month >> separator2 >> day;
    if ((1 <= day && day <= num_days(year, month)) && (1 <= month && month <= 12) && (1 <= year && year <= 9999) && (separator1 == '/') && (separator2 == '/')) {

        ostringstream oss;
        oss.fill('0');
        oss.width(4);
        oss << year;
        oss.width(2);
        oss << month;
        oss.width(2);
        oss << day;
        yyyymmdd = oss.str();

    } else {

        yyyymmdd = "00000000";
    }
}
bool Date::is_valid() const {

    return yyyymmdd != "00000000";
}