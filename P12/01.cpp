#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cfloat>

using namespace std;

//! Show file name and its contents.
void show_file(const string& file) {
  ifstream in(file);
  cout << "==> " << file << " <==\n";
  for (string line; getline(in, line); ) cout << line << '\n';
}

bool average(const string& input_fname, const string& output_fname) {

    ifstream in(input_fname);
    if (in.fail()) return false;
    ofstream out(output_fname);
    string line;
    int ammount_of_lines = 0;

    while(getline(in, line)) {

        istringstream iss(line);
        int number_of_values = 0;
        double number, sum = 0;
        while (iss >> number) {

            sum += number;
            number_of_values++;
        }        
        out << fixed << setprecision(3) << sum / number_of_values << '\n';
        ammount_of_lines++;
    }
    out << "lines=" << ammount_of_lines;
    return true;
}

int main() {

    if (average("p1a-1.txt", "p1a-1_out.txt"))
    show_file("p1a-1_out.txt");

    return 0;
}