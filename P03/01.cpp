#include <iostream>

unsigned long hstr_to_integer(const char hstr[]) {

    int lenght = 0;
    unsigned long total = 0;
    while (hstr[lenght] != '\0') {
        
        total *= 16;

        if (48 <= hstr[lenght] && hstr[lenght] <= 57) {

            total += hstr[lenght] - 48;
        }
        else if (65 <= hstr[lenght] && hstr[lenght] <= 70) {

            total += hstr[lenght] - 55;
        }
        else if (97 <= hstr[lenght] && hstr[lenght] <= 102) {

            total += hstr[lenght] - 87;
        }
        
        lenght++;
    }

    return total;
}