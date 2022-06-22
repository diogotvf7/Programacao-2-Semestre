#include <iostream>
#include <iomanip>
#include <sstream>

#include "Date2.h"

using namespace std;

int num_days(int year, int month) {
    int nofdays[] = {0, 31, 28 * !((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0) + 29 * ((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return nofdays[month];
}

Date::Date() {

    year = 1; month = 1; day = 1;
}
Date::Date(int year, int month, int day) {
    
    if (year >= 1 && year <= 9999) this->year = year;
    else {this->year = 0; this->month = 0; this->day = 0; return;}
    if (month >= 1 && month <= 12) this->month = month;
    else {this->year = 0; this->month = 0; this->day = 0; return;}
    if (day >= 1 && day <= num_days(year, month)) this->day = day;
    else {this->year = 0; this->month = 0; this->day = 0; return;}    
}
Date::Date(const std::string& year_month_day) {

    istringstream iss(year_month_day);
    int year, month, day;
    char sep1, sep2;
    iss >> year >> sep1 >> month >> sep2 >> day;
    
    if (year >= 1 && year <= 9999 && sep1 == '/' && sep2 == '/') this->year = year;
    else {this->year = 0; this->month = 0; this->day = 0; return;}
    if (month >= 1 && month <= 12 && sep1 == '/' && sep2 == '/') this->month = month;
    else {this->year = 0; this->month = 0; this->day = 0; return;}
    if (day >= 1 && day <= num_days(year, month) && sep1 == '/' && sep2 == '/') this->day = day;
    else {this->year = 0; this->month = 0; this->day = 0; return;}  
}
bool Date::is_valid() const {

    return (year != 0 && month != 0 && day != 0);
}


int main() {
	
    cout << "Janeiro " << num_days(2000, 1) << '\n';
    cout << "Fevereiro " << num_days(2000, 2) << '\n';
    cout << "Março " << num_days(2000, 3) << '\n';
    cout << "Abril " << num_days(2000, 4) << '\n';
    cout << "Maio " << num_days(2000, 5) << '\n';
    cout << "Junho " << num_days(2000, 6) << '\n';
    cout << "Julho " << num_days(2000, 7) << '\n';
    cout << "Agosto " << num_days(2000, 8) << '\n';
    cout << "Setembro " << num_days(2000, 9) << '\n';
    cout << "Outubro " << num_days(2000, 10) << '\n';
    cout << "Novembro " << num_days(2000, 11) << '\n';
    cout << "Dezembro " << num_days(2000, 12) << '\n';
    cout << 2000 << " " << num_days(2000, 2) << '\n';
    cout << 2001 << " " << num_days(2001, 2) << '\n';
    cout << 2002 << " " << num_days(2002, 2) << '\n';
    cout << 2003 << " " << num_days(2003, 2) << '\n';
    cout << 2004 << " " << num_days(2004, 2) << '\n';
    cout << 2005 << " " << num_days(2005, 2) << '\n';
    cout << 2006 << " " << num_days(2006, 2) << '\n';
    cout << 2007 << " " << num_days(2007, 2) << '\n';
    cout << 2008 << " " << num_days(2008, 2) << '\n';
    cout << 2009 << " " << num_days(2009, 2) << '\n';
    cout << 2010 << " " << num_days(2010, 2) << '\n';
    cout << 2011 << " " << num_days(2011, 2) << '\n';
    cout << 2012 << " " << num_days(2012, 2) << '\n';
    cout << 2013 << " " << num_days(2013, 2) << '\n';
    cout << 2014 << " " << num_days(2014, 2) << '\n';
    cout << 2015 << " " << num_days(2015, 2) << '\n';
    cout << 2016 << " " << num_days(2016, 2) << '\n';
    cout << 2017 << " " << num_days(2017, 2) << '\n';
    cout << 2018 << " " << num_days(2018, 2) << '\n';
    cout << 2019 << " " << num_days(2019, 2) << '\n';
    cout << 2020 << " " << num_days(2020, 2) << '\n';
    cout << 2021 << " " << num_days(2010, 2) << '\n';
    cout << 2022 << " " << num_days(2022, 2) << '\n';
    cout << 2023 << " " << num_days(2023, 2) << '\n';
    cout << 2024 << " " << num_days(2024, 2) << '\n';
    cout << 2025 << " " << num_days(2025, 2) << '\n';
    cout << 2026 << " " << num_days(2026, 2) << '\n';
    cout << 2027 << " " << num_days(2027, 2) << '\n';

    Date d2(2020, 2, 30); d2.write(); cout << (d2.is_valid() ? "-valid" : "-invalid") << endl;

    return 0;
}