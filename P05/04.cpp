#include <iostream>
using namespace std;
 
//! Complex number
struct complex {
  int real;  // Real part
  int img;   // Imaginary part
};
 
//! Print array of complex numbers.
void print(const complex z[], int n) {
  cout << "[ ";
  for (int i = 0; i < n; i++) {
    if (z[i].real == 0 && z[i].img == 0) 
      cout << 0;
    else {
      if (z[i].real != 0)
        cout << z[i].real;
      if (z[i].img > 0) 
        cout  << '+' << z[i].img << 'i';
      else if (z[i].img < 0) 
        cout  << z[i].img << 'i';
    }
    cout << ' ';
  }
  cout << "]\n";
}

void csquare(complex& c) {

  c = {c.real * c.real - c.img * c.img, 2 * c.real * c.img};
}

void csum(complex& c1, complex c2) {

  c1.real += c2.real;
  c1.img += c2.img;
}

void mandel(complex c, int n, complex z[]) {

  complex prev = {0, 0};
  z[0] = prev;

  for (int i = 1; i < n; i++) {

    csquare(prev);
    csum(prev, c);
    z[i] = prev;
    prev = z[i];
  }    
}

int main() {

  // complex c = { 0, 0 };
  // const int n = 1;
  // complex z[n];
  // mandel(c, n, z);
  // print(z, n);

  // complex c = { 0, 0 };
  // const int n = 3;
  // complex z[n];
  // mandel(c, n, z);
  // print(z, n);

  complex c = { 1, 1 };
  const int n = 3;
  complex z[n];
  mandel(c, n, z);
  print(z, n);

  return 0;
}