#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
 
using namespace std;

string string_to_upper(string str) {

    for (char& c : str) c = toupper(c);
    return str;
}

int count(const string& fname, const string& word) {
    
    ifstream in(fname);
    string word2, line;
    int occurrences = 0;

    while (getline(in, line)) {

        istringstream iss(line);
        while (iss >> word2) if (string_to_upper(word2) == string_to_upper(word)) occurrences++;
    }
    return occurrences;
}

int main () {

    cout << count("p1_test_a.txt", "THE") << '\n';

    return 0;
}