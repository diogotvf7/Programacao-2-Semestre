#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string lower(string str) {

    string aux;
    for (char c : str) aux.push_back(tolower(c));
    return aux;
}

int count(const string& fname, const string& word) {

    ifstream in(fname);
    int counter = 0;
    string c, lower_word = lower(word);
    while(in >> c) if (lower(c) == lower_word) counter++;
    return counter;
}

int main() {

    cout << count("p1_test_a.txt", "THE") << '\n';
    // cout << count("p1_test_a.txt", "0") << '\n';
    // cout << count("p1_test_a.txt", "code") << '\n';
    // cout << count("p1_test_b.txt", "Collider") << '\n';
    // cout << count("p1_test_b.txt", "you") << '\n';

    return 0;
}