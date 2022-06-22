#include <iostream>
#include <cmath>
using namespace std;

unsigned long factorial(unsigned long n) {

    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

unsigned long bc(unsigned long n, unsigned long k) {

    return factorial(n) / (factorial(k) * factorial(n - k));
}

unsigned long bell(unsigned long n) {

    unsigned long sum = 0;

    if (n == 0 || n == 1) return 1;

    for (unsigned long k = 0; k <= n - 1; k++) {

        sum += bc(n - 1, k) * bell(k);                
    }
    
    return sum;
}

int main() {

    cout << bell(15);
}