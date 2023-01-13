#include <iostream>
#include <random>
#include <fstream>
#include <string>
#include "Header.h"
#include "error.h"
using namespace std;
int main()
{
	try
	{
	setlocale(0, "rus");
	int n, k, u = 1;
	srand(time(0));
	list l;
	cout << "Сколько элементов создать?" << endl;
	cin >> k;
	l.pushback(k);
	l.print();
	cout << "Какой по счету элемент вывести?" << endl;
	cin >> n;
	l.operator[](n);
	cout << "Длинна списка: ";
	l.operator()(k);
	cout << endl;
	cout << "На какое число умножить?" << endl;
	cin >> u;
	l.operator*(u);
	l.print();
	l.alldel();
	}
	catch (Error& e)
	{
	e.what();
	}
	return 0;
}