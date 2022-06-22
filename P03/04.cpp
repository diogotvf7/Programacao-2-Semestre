#include <iostream>
using namespace std;

int pow(int b, int e) {
    int total = 1;
    for (int i = 0; i < e; i++) total *= b;
    return total;
}

void int_to_str(int n, char str[], int& pos) {

    int temp = n, lenght = 0; 

    while (temp > 0) {
        temp /= 10;
        lenght++;
    }

    for (int i = lenght - 1; i >= 0; i--) {

        str[pos++] = n / pow(10, i) + 48;
        n %= pow(10, i);
    }
}

void rleEncode(const char str[], char rle[]) {

    char current = str[0];
    int amount = 1, i = 0, ri = 0;

    while (str[i] != '\0') {

        i++;
        
        if (current != str[i]) {
            
            int_to_str(amount, rle, ri);
            rle[ri++] = current;
            current = str[i];
            amount = 1;
        }
        else amount += 1;

    }

    rle[ri] = 0;
}

int main() {
    
    // char rle[10 + 1] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}; 
    // rleEncode("abcde", rle);
    // cout << rle << endl;

    char rle[2 + 1] = { -1, -1, -1 };
    rleEncode("a", rle);
    cout << rle << endl;

    return 0;
}