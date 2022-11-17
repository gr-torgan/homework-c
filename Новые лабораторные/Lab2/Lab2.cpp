#include "Bancomat.h"
#include <iostream>
using namespace std;
//функция для возврата объекта как результата
Bancomat make_tovar()
{
	double s;
	int i;
	double d;
	cout << "Введите идентификационный номер: ";
	cin >> s;
	cout << "Введите остаток денег: ";
	cin >> i;
	cout << "Введите максимальную сумму, которую может снять клиент: ";
	cin >> d;
	Bancomat t(s, i, d);
	return t;
}
//функция для передачи объекта как параметра
void print_tovar(Bancomat t)
{
	t.show();
}
int main()
{
	setlocale(LC_ALL, "Russian");
	//конструктор без параметров
	Bancomat t1;
	t1.show();
	//коструктор с параметрами
	Bancomat t2(6000, 1, 15000);
	t2.show();
	//конструктор копирования
	Bancomat t3 = t2;
	t3.set_naimenovanie(8000.5);
	t3.set_kolichestvo(2);
	t3.set_stoimost(5000.0);
	//конструктор копирования
	print_tovar(t3);
	//конструктор копирования
	t1 = make_tovar();
	t1.show();
	return 0;
}