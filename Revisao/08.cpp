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

void normalise(const string& input_fname, const string& output_fname) {
    
    ifstream in(input_fname);
    ofstream out(output_fname);
    string line, normalised_line;

    while (getline(in, line)) {

        if (line.find_first_not_of(' ') == string::npos) continue;
        normalised_line = line.substr(line.find_first_not_of(' '), line.find_last_not_of(' ') - line.find_first_not_of(' ') + 1);
        for (char& c : normalised_line) c = toupper(c);
        out << normalised_line << '\n';
    }
}

int main () {

    normalise("p3_test1.txt", "p3_test1_out.txt");
    print("p3_test1_out.txt");

    return 0;
}