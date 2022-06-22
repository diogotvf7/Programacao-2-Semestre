#include <iostream>
#include <vector>
#include <iomanip>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;

void SalariedEmployee::calculate_net_pay() {set_net_pay(salary_);}

void HourlyEmployee::calculate_net_pay() {set_net_pay(wage_rate_ * hours_);}

void read_hours_worked(vector<Employee*> &employees) {

    for (Employee* e : employees) {

        HourlyEmployee* worker = dynamic_cast<HourlyEmployee*> (e);
        if (worker != nullptr) {

            double labor_hours;
            cin >> labor_hours;
            worker->set_hours(labor_hours);
        }
    }
}

void calculate_pay(vector<Employee*>& employees) {for (Employee* e : employees) e->calculate_net_pay();}

void print_checks(const vector<Employee*>& employees) {

    cout << '|';
    for (Employee* e : employees) {

        cout << ' ';
        HourlyEmployee* worker = dynamic_cast<HourlyEmployee*> (e);
        if (worker != nullptr) 
            cout << fixed << setprecision(2) << worker->get_name() << ":HE(" << worker->get_hours() << ',' << worker->get_rate() << ")=" << worker->get_net_pay() << " |";
        else {
            
            SalariedEmployee* worker = dynamic_cast<SalariedEmployee*> (e);
            if (worker != nullptr)
                cout << fixed << setprecision(2) << worker->get_name() << ":SE(" << worker->get_salary() << ")=" << worker->get_net_pay() << " |";
        }
    }
}