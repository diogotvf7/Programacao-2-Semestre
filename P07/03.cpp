#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

//! Show file contents with line number information and 
//! the '|' character indicating the begining and end of lines.
void print(const std::string& file) {
  ifstream in(file);
  size_t line_nr = 1;
  for (string line; getline(in, line);) {
     cout << line_nr << "|" << line << "|\n";
     line_nr++;
  }
}

string upper(string str) {
    string aux;
    for (char c : str) aux.push_back(toupper(c));
    return aux;
}

string trim(string str) {
    return str.substr(str.find_first_not_of(' '), str.find_last_not_of(' ') - str.find_first_not_of(' ') + 1);
}

bool isBlank(string str) {

    for (char c : str) {
        if (c != ' ') return true;
    }
    return false;
}

void normalise(const string& input_fname, const string& output_fname) {

    ifstream in(input_fname);
    ofstream out(output_fname);
    string line, aux;

    while (getline(in, line)) {

        if (!isBlank(line)) continue;
        aux = trim(line);
        aux = upper(aux);
        out << aux << '\n';
    }
}

int main () {

    normalise("p3_test1.txt", "p3_test1_out.txt"); 
    print("p3_test1_out.txt");
    
    return 0;
}