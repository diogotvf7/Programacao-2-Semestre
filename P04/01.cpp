#include <iostream>
#include "alist.cpp"
using namespace std;


void append(alist* a, const alist* b) {

  int arrsize = a->size + b->size;
  int* arr = new int[arrsize];
  int* j = a->elements;
  int* k = b->elements;

  for (int i = 0; i < a->size; i++) {

    arr[i] = *j;
    j++;
  }
  for (int i = 0; i < b->size; i++) {

    arr[i + a->size] = *k;
    k++;
  }
  
  delete [] a->elements;
  a->elements = arr;
  a->size = arrsize;
}

int main() {

  // alist* a = empty();
  // const int nB = 2;
  // int eB[nB] = { 1, 2 };
  // const alist* b = build(nB, eB);
  // append(a, b);
  // print(a);
  // destroy(a);
  // destroy(b);

  const int nA = 2;
  int eA[nA] = { 1, 2 };
  alist* a = build(nA, eA);
  const int nB = 3;
  int eB[nB] = { 3, 4, 5 };
  const alist* b = build(nB, eB);
  append(a, b);
  print(a);
  destroy(a);
  destroy(b);

}