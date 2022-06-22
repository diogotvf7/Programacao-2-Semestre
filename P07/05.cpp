#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

//! Show file name and the contents.
void show_file(const string& file) {
  ifstream in(file);
  cout << "==> " << file << " <==\n";
  for (string line; getline(in, line); ) cout << line << '\n';
}

void calc_medians(const string& input_fname, const string& output_fname) {

    ifstream in(input_fname);
    ofstream out(output_fname);
    string line, identifier;
    double value;

    while (getline(in, line)) {

        vector<double> values = {};

        identifier = line.substr(0, line.find_first_of(' '));
        if (identifier[0] == '#') continue;
        line = line.substr(line.find_first_of(' '), line.length() - line.find_first_of(' '));
        istringstream _line(line);
        
        while (_line >> value) values.push_back(value);

        sort(values.begin(), values.end());
        if (values.size() % 2 == 0) {

            out << identifier << ' ' << fixed << setprecision(1) << 0.5 * (values[values.size() / 2 - 1] + values[values.size() / 2]) << endl;
        }
        else {

            out << identifier << ' ' << fixed << setprecision(1) << values[values.size()/2] << endl;
        }
    }
}

int main () {

    // calc_medians("p5_test1.txt", "p5_test1_out.txt"); 
    // show_file("p5_test1_out.txt");

    // calc_medians("p5_test2.txt", "p5_test2_out.txt"); 
    // show_file("p5_test2_out.txt");

    calc_medians("p5_test3.txt", "p5_test3_out.txt"); 
    show_file("p5_test3_out.txt");

    // calc_medians("p5_test4.txt", "p5_test4_out.txt"); 
    // show_file("p5_test4_out.txt");

    // calc_medians("p5_test5.txt", "p5_test5_out.txt"); 
    // show_file("p5_test5_out.txt");

    return 0;
}