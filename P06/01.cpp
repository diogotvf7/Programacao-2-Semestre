#include <iostream>
#include <string>
using namespace std;

bool pangram(const string& s, string& m) {

    int alp[26] = {0};

    for (char c : s) {

        if ('a' <= c && c <= 'z') alp[c - 'a']++;
        if ('A' <= c && c <= 'Z') alp[c - 'A']++;
    }
    for (int i = 0; i < 26; i++) if (alp[i] == 0) m.push_back('a' + i);

    return !m.length();
}

int main () {
    
    return 0;
}