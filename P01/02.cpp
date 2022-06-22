#include <iostream>
#include <cmath>

int main() {
    
    
    int n;
    int nn = 0;
    std::cin >> n;
    
    while (n > 0) {
        
        nn += n % 10;
        n /= 10;
        nn *= 10;
        
    }
    
    std::cout << nn / 10;
    return 0;
}