#include <iostream>
using namespace std;

//! Print array.
void print(int a[], int size) {
  cout << "[ ";
  for (int i = 0; i < size; i++)
    cout << a[i] << " ";
  cout << "]";
  cout << endl;
}

void remove_duplicates(int a[], int& size) {

    int i = 1, j = 1;
    int last = a[0];

    while (i < size) {

        if (a[i] != last) {

            last = a[i];
            a[j++] = last;
        }
        i++;
    }
    size = j;
}

int main() {

    // int a[] = { 1, 2, 3 };
    // int size = sizeof(a) / sizeof(int);
    // remove_duplicates(a, size);
    // print(a, size);

    // int a[] = { 1, 1, 2, 2, 3, 3, 3 };
    // int size = sizeof(a) / sizeof(int);
    // remove_duplicates(a, size);
    // print(a, size);

    int a[] = { 1, 1, 1, 1, 2, 3, 3 };
    int size = sizeof(a) / sizeof(int);
    remove_duplicates(a, size);
    print(a, size);

    return 0;
}