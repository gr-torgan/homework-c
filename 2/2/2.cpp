#include <math.h>
#include <iostream>
#include <conio.h>

long double fact(double n)
    {
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
    }
int main()
{
    
    double  sum, an, n;
    an = 1.0;
    sum = 0;
    n = 1.0;
    while (an > 1E-4)
    {
        an = (10 * fact(n))/(fact(n + 1));
        sum = sum + an;
        
        n = n + 1.0;
    }
    std::cout << "Sum of the series: " << sum;
    _getch;
}