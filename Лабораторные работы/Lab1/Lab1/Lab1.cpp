#include<iostream>
#include "fraction.h"
using namespace std;
fraction make_fraction(double F, int S)
{
	fraction t;//создали временную переменную
	t.Init(F, S);//инициализировали поля переменной t с помощью параметров функции
	return t;//вернули значение переменной t
}

int main()
{
	extern int k;
	//определение переменных А и В
	fraction A{};
	fraction B{};
	A.Init(3.0, 2);//инициализация переменной А
	B.Read();//ввод полей переменных В
	A.Show();//вывод значений полей переменной А
	B.Show();//вывод значений полей переменной В
	//вывод значения степени, вычисленного с помощью функции Multiply()
	cout << "A.Multiply(" << A.first << "," << A.second << ")=" << A.Multiply(k) << endl;
	cout << "B.Multiply(" << B.first << "," << B.second << ")=" << B.Multiply(k) << endl;
	//указатели
	fraction* X = new fraction;//выделение памяти под динамическую переменную
	X->Init(2.0, 5);//инициализация
	X->Show();//вывод значений полей
	X->Multiply(k);//вычисление степени
	cout << "X.Multiply(" << X->first << "," << X->second << ")=" << X->Multiply(k) << endl;
	//массивы
	fraction mas[3];//определение массива
	for (int i = 0; i < 3; i++)
		mas[i].Read();//чтение значений полей
	for (int i = 0; i < 3; i++)
		mas[i].Show(); //вывод значений полей
	for (int i = 0; i < 3; i++)
	{
		mas[i].Multiply(k); //вычисление степени
		cout << "mas[" << i << "].Multiply(" << mas[i].first << "," << mas[i].second << ")=";
		cout << mas[i].Multiply(k) << endl;
	}
	//динамические масивы
	fraction* p_mas = new fraction[3];//выделение памяти
	for (int i = 0; i < 3; i++)
		p_mas[i].Read();//чтение значений полей
	for (int i = 0; i < 3; i++)
		p_mas[i].Show();//вывод значений полей
	for (int i = 0; i < 3; i++)
	{
		p_mas[i].Multiply(k);//вычисление степени
		cout << "p_mas[" << i << "].Multiply(" << p_mas[i].first << "," << p_mas[i].second;
		cout << ")=" << p_mas[i].Multiply(k) << endl;
	}
	//вызов функции make_fraction()
	double y; int z;
	cout << "first?"; cin >> y;
	cout << "second?"; cin >> z;
	//переменная F формируется с помощью функции make_fraction()
	fraction F = make_fraction(y, z);
	F.Show();
	return 0;
}