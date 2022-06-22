#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct sm_entry {
  size_t row;
  size_t col;
  int value;
};

typedef vector<sm_entry> smatrix;

//! Print a sparse matrix.
void print(const smatrix& sm) {
  cout << "[ ";
  for (sm_entry e : sm) {
    cout << '(' << e.row << ", " << e.col << ", " << e.value << ") ";
  }
  cout << "]\n";
}

int cmpEntry (sm_entry a, sm_entry b) { // return: 0 -> a first, 1 -> b first, 2 -> both

  if (a.row == b.row && a.col == b.col) return 2;
  else if (a.row == b.row) return b.col < a.col;
  else return b.row < a.row;
} 

void sum(const smatrix& a, const smatrix& b, smatrix& r) {

    long unsigned int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
      
      switch(cmpEntry(a[i], b[j])) {

        case 0:
          r.push_back(a[i++]);
        break;

        case 1:
          r.push_back(b[j++]);
        break;

        case 2:
          if (a[i].value + b[j].value == 0) {
            i++, j++;
            break;
          }
          r.push_back({a[i].col, b[j].row, a[i++].value + b[j++].value});
        break;
      }

    }
    while (i < a.size()) {
      r.push_back(a[i++]);
    }
    while (j < b.size()) {
      r.push_back(b[j++]);
    }
}

int main() {

  // smatrix r;
  // sum({ },
  //     { {0, 3, 1}, {0, 50, 1} },
  //     r);
  // print(r);

  // smatrix r;
  // sum({ {0, 0, 1}, {1, 0, 1} },
  //     { {0, 3, 1}, {0, 50, 1} },
  //     r);
  // print(r);

  smatrix r;
  sum({ {0, 0, 1}, {0, 1, 2}, {5, 10, 20}, {99, 12, 32} },
      { {0, 0, 1}, {0, 1, -2}, {10, 5, 20}, {99, 10, 30}, {99, 11, 31} },
      r);
  print(r);

  // smatrix r;
  // sum({ {0, 0, -1}, {0, 1, 2}, {5, 10, 20}, {10, 5, -20} },
  //     { {0, 0, 1}, {0, 1, -2}, {10, 5, 20} },
  //     r);
  // print(r);

  return 0;
}