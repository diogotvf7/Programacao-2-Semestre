#include <iostream>
#include "Date.h"

Date::Date() {

    year_ = 1;
    month_ = 1;
    day_ = 1;
}
Date::Date(int year, int month, int day) {

    year_ = year;
    month_ = month;
    day_ = day;
}
bool Date::is_before(const Date& date) const {

    return year_ < date.year() ||
          ((year_ == date.year()) && (month_ < date.month())) ||
          ((year_ == date.year()) && (month_ == date.month()) && (day_ < date.day()));
}
int Date::year() const {

    return year_;
}
int Date::month() const {

    return month_;
}
int Date::day() const {

    return day_;
}
