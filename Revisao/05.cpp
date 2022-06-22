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

char control(const sm_entry& a, const sm_entry& b) {

    if (a.row < b.row || (a.row == b.row && a.col < b.col)) return 'a';
    if (a.row > b.row || (a.row == b.row && a.col > b.col)) return 'b';
    return 'c';
}

void sum(const smatrix& a, const smatrix& b, smatrix& r) {
    
   size_t i = 0, j = 0;

    while (i < a.size() && j < b.size()) {

        switch (control(a[i], b[j])) {

            case 'a':
                
                r.push_back({a[i].row, a[i].col, a[i].value});
                i++;    
                break;
            case 'b':

                r.push_back({b[j].row, b[j].col, b[j].value});
                j++;
                break;
            case 'c':
                
                if (a[i].value + b[j].value) r.push_back({a[i].row, a[i].col, a[i].value + b[j].value});
                i++; j++;
                break;
        }
    }

    while (i < a.size()) {

        r.push_back({a[i].row, a[i].col, a[i].value});
        i++;    
    }

    while (j < b.size()) {

        r.push_back({b[j].row, b[j].col, b[j].value});
        j++;
    }
}

int main () {

    smatrix r;
    sum({ {0, 0, 1}, {0, 1, 2}, {5, 10, 20}, {99, 12, 32} },
        { {0, 0, 1}, {0, 1, -2}, {10, 5, 20}, {99, 10, 30}, {99, 11, 31} },
        r);
    print(r);

    return 0;
}