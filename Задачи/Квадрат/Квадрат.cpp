#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    for (int i=1;i<=n;i++)
        cout << "*";
    cout << "\n";
    for (int i = 1; i <= (n - 2); i++)
    {
        cout << "*";
        for (int j = 1; j <= (n - 2); j++)
            cout << " ";
        cout << "*";
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
        cout << "*";
    _getch; //Для того что бы окно не закрылось
    return 0;
}
