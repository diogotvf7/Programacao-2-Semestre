#include <iostream>
using namespace std;

bool is_mersenne_number(unsigned long n) {
    unsigned long nn = n;
    while (n) {
        if(n % 2 == 0) return false;
        n /= 2;
    }
    return nn != 0;
}