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
    string line, identifier; double d; 

    while (getline(in, line)) {

      identifier = line.substr(0, line.find_first_of(' '));
      if (identifier[0] == '#') continue;
      istringstream iss(line.substr(line.find_first_of(' '), line.length() - line.find_first_of(' ')));
      vector<double> v;

      while (iss >> d) v.push_back(d);
      sort(v.begin(), v.end());

      if (v.size() % 2) out << identifier << ' ' <<fixed << setprecision(1) << v[v.size()/2] << '\n';
      else out << identifier << ' ' << 0.5 * (v[v.size()/2 - 1] + v[v.size()/2]) << '\n';
    }
}