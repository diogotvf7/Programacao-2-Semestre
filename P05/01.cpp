#include <iostream>
using namespace std;

int main() {

    char input;
    cin >> input;

    if (('a' <= input && input <= 'z') || ('A' <= input && input <= 'Z')) cout << "LETTER";
    else if ('0' <= input && input <= '9') cout << "DIGIT";
    else cout << "OTHER";
    return 0;
}