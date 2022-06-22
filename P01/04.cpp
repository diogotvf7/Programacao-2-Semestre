#include <iostream>

bool isPrime (int n) {
    
    if (n < 2) 
        return false;

    for (int j = 2; j < n; j++) {
        
        if (n % j == 0)
            return false;
    }
    return true;
}

bool isPernicious (int n) {

    int total = 0;

    while (n > 0) {

        total += n % 2;
        n /= 2;
    }

    return isPrime(total);
}

int main () {

    int a, b;
    std::cin >> a;
    std::cin >> b;

    for (int i = a; i <= b; i++) {

        if (isPrime(i) && isPernicious(i))
            std::cout << i << '\n';

    }

    return 0;
}