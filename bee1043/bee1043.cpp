#include <stdio.h>
#include <iostream>

using namespace std;
 
int main() {
 
    double a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        double p = a + b + c;

        printf("Perimetro = %.1f\n", p);
    } else {
        double area = ((a + b) * c) / 2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}