#include <cmath>
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  double a, b, c;
  cin >> a >> b >> c;

  if (b > a)
    swap(a, b);
  if (c > a)
    swap(a, c);

  if (a >= b + c) {
    cout << "NAO FORMA TRIANGULO" << endl;

  } else if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
    cout << "TRIANGULO RETANGULO" << endl;

  } else if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
    cout << "TRIANGULO OBTUSANGULO" << endl;

  } else if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
    cout << "TRIANGULO ACUTANGULO" << endl;

  } else {
    cout << "NAO FORMA TRIANGULO" << endl;
  }

  if (a == b && b == c) {
    cout << "TRIANGULO EQUILATERO" << endl;

  } else if (a == b || a == c || b == c) {
    cout << "TRIANGULO ISOSCELES" << endl;
  } else {
  }

  return 0;
}
