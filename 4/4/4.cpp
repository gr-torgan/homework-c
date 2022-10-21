#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, i, f, k, del = 0;
    int mas[100]{};
    int mas2[100]{};
    cout << "n = ";
    cin >> n;
    for (i = 0; i < n; i++) {
        mas[i] = rand();
        cout << mas[i] << " ";
    }
    cout << '\n';
    cout << "del = ";
    cin >> del;
    for (i = 0; i < n; i++) {
        if (del == mas[i])
        {
            for (f = i; f < n; f++)
            {
                mas2[f] = mas[f + 1];
                mas[f] = mas2[f];
            }
            n--;
            exit;
        }
    }
    cout << "k = ";
    cin >> k;
    n = n + k;
    for (i = 0; i < n; i++) {

        mas2[i] = rand();
    }
    for (i = k; i < n; i++) {

        mas2[i] = mas[i - k];
    }
    for (i = k; i < n; i++) {

        mas[i] = mas2[i];
    }
    for (i = 0; i < n; i++) {

        cout << mas[i] << " ";
    }
    return 0;
    _getch;
}
