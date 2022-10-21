#include <iostream>
#include <cmath>
#include <conio.h>

int main()
{
    float x = 2;
    float a = 100;
    float b = 0.001;
    float y = 0;
    float z = 0;
    x = pow((a + b), 4);
    y = (pow(a, 4)) + (4 * pow(a, 3) * b);
    z = x - y;
    x = (6 * pow(a, 2) * pow(b, 2)) + (4 * a * pow(b, 3)) + (pow(b, 4));
    y = z / x;
    std::cout << y;
    std::cout << '\n';
    double c = 2;
    double f = 100;
    double g = 0.001;
    double d = 0;
    double e = 0;
    c = pow((f + g), 4);
    d = (pow(f, 4)) + (4 * pow(f, 3) * g);
    e = c - d;
    c = (6 * pow(f, 2) * pow(g, 2)) + (4 * f * pow(g, 3)) + (pow(g, 4));
    d = e / c;
    std::cout << d;
    _getch;
}