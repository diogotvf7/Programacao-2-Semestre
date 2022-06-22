#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

double average(const string& fname) {

    ifstream in(fname);
    double d, sum = 0, ammount = 0;
    
    while (true) {
        
        if (in.eof()) break;
        if (in >> d) {

            ammount++;
            sum += d;
            continue;
        }
        
        in.clear();
        in.ignore(1);
    }

    return sum / ammount;
}

int main () {

    double a = average("p4_test1.txt"); 
    double b = average("p4_test2.txt"); 
    double c = average("p4_test3.txt"); 
    double d = average("p4_test4.txt"); 
    double e = average("p4_test5.txt"); 
    cout << fixed << setprecision(2) << a  << " - 2.50" << '\n';
    cout << fixed << setprecision(2) << b  << " - 2.50"  << '\n';
    cout << fixed << setprecision(2) << c  << " - 0.75"  << '\n';    
    cout << fixed << setprecision(2) << d  << " - 1.00"  << '\n';
    cout << fixed << setprecision(2) << e  << " - 3.50"  << '\n';
    
    return 0;
}