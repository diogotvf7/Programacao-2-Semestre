#include <iostream>
using namespace std;
bool is_mersenne_number(unsigned long n) {

    if (n == 0) return false;

    while (n > 0) {

        if (n % 2 == 0)
            return false;
        n /= 2;
    } 
    return true;
}

int main() {

    cout << is_mersenne_number(0);  
    cout << is_mersenne_number(3);  
    cout << is_mersenne_number(4);  
    cout << is_mersenne_number(65535);  
    cout << is_mersenne_number(18446744073709551614UL);    

    return 1;
}