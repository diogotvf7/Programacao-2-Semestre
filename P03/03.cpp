#include <iostream>
using namespace std;

//! Auxiliary function to print n elements of an array.
void print_array(const int a[], int n){
  cout << '[' << a[0];
  for (int i = 1; i < n; i++) {
    cout << ',' << a[i];
  }
  cout << "]\n";
}

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]) {

    int ia = 0, ib = 0;

    while (ia < na || ib < nb) {

        if (ia == na) {

            c[ia + ib] = b[ib];
            ib++;
        }
        else if (ib == nb) {

            c[ia + ib] = a[ia];
            ia++;
        }
        else if (a[ia] <= b[ib]) {

            c[ia + ib] = a[ia];
            ia++;
        }
        else if (b[ib] < a[ia]) {

            c[ia + ib] = b[ib];
            ib++;
        }
    }

}

int main() {
    const int NA = 4, NB = 6;
    int a[NA] = { 1, 2, 4, 7};
    int b[NB] = { 0, 3, 5, 6, 8, 9};
    int c[NA+NB];
    merge_arrays(a, NA, b, NB, c);
    print_array(c, NA+NB);
    return 1;
}