#include <iostream>

int main() {
    
    int n;
    std::cin >> n;
    
    for (int i = 1; i <= n; i++) {
        
        if (i % 3 == 0 && i % 5 == 0) 
            continue;
        
        if (i % 3 == 0) {
            std::cout <<"Fizz ";
            continue;
        }
        
        if (i % 5 == 0) {
            std::cout <<"Buzz ";
            continue;
        }
        
        std::cout << i;
        std::cout << " ";
    }

return 0;
}