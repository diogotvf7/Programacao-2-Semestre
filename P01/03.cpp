#include <iostream>

bool isPrime(int n) {
    
    if (n < 2)
        return false;

    for (int j = 2; j < n; j++) {
        
        if (n % j)
            return false;
    }
    
    return true;
}

int main() {
    
    int n, i = 2;
    std::cin >> n;
    
    while (i <= n) {
        
        if (isPrime(i))
            std::cout << i << '\n';
        i++;
    }
    
    return 0;
}