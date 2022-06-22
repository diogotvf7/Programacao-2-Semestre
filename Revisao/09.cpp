#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

double average(const string& fname) {

    ifstream in(fname);
    double read_value, sum = 0, ammount_of_values = 0;

    while (true) {

        if (in.eof()) break;
        if (in >> read_value) {

            sum += read_value;
            ammount_of_values++;
            continue;
        }
        in.clear();
        in.ignore(1);
    }
    return sum / ammount_of_values;
}