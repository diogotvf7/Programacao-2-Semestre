#include <iostream>
using namespace std;

bool isPrime(int n) {
    
    for (int i = 2; i < n; i++) if (n % i == 0) return false;
    return n != 1;
}

int main() {

    int n; cin >> n;
    for (int i = 0; i <= n; i++) if (isPrime(i)) cout << i << '\n';
    return 0;
}