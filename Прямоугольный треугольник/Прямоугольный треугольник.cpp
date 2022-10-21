#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n-i); j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << '\n';
    }
    _getch; //Для того что бы окно не закрылось
    return 0;
}