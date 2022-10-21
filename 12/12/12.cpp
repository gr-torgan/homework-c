#include <iostream>
#include <stdio.h>
#include <conio.h>

int main()
{
    int n = 0;
    int m = 0;
    int x = 0;
    x = ++n * ++m;
    std::cout << "1: ";
    std::cout << x;
    std::cout << '\n';
    x = 0;
    m = 0;
    n = 0;
    x = m++ < n;
    std::cout << "2: ";
    std::cout << x;
    std::cout << '\n';
    x = 0;
    m = 0;
    n = 0;
    x = n++ > m;
    std::cout << "3: ";
    std::cout << x;
    std::cout << '\n';
    _getch;
}