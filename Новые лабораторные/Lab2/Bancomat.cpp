#include "Bancomat.h"
#include <iostream>
using namespace std;
//конструктор без параметров
Bancomat::Bancomat()
{
	naimenovanie = 0;
	kolichestvo = 0;
	stoimost = 0;
	cout << "Конструктор без параметров для объекта " << this << endl;
}
//конструктор с параметрами
Bancomat::Bancomat(double N, int K, double S)
{
	naimenovanie = N;
	kolichestvo = K;
	stoimost = S;
	cout << "Конструктор с параметрами для объекта" << this << endl;
}
//конструктор копирования
Bancomat::Bancomat(const Bancomat& t)
{
	naimenovanie = t.naimenovanie;
	kolichestvo = t.kolichestvo;
	stoimost = t.stoimost;
	cout << "Конструктор копирования для объекта " << this << endl;
}
//деструктор
Bancomat::~Bancomat()
{
	cout << "Деструктор для объекта " << this << endl;
}
//селекторы
double Bancomat::get_naimenovanie()
{
	return naimenovanie;
}
int Bancomat::get_kolichestvo()
{
	return kolichestvo;
}
double Bancomat::get_stoimost()
{
	return stoimost;
}
//модификаторы
void Bancomat::set_naimenovanie(double N)
{
	naimenovanie = N;
}
void Bancomat::set_kolichestvo(int K)
{
	kolichestvo = K;
}
void Bancomat::set_stoimost(double S)
{
	stoimost = S;
}
//метод для просмотра атрибутов
void Bancomat::show()
{	
	cout << "Идентификационный номер  :" << kolichestvo << endl;
	cout << "Остаток денег в банкомате  :" << naimenovanie << endl;
	cout << "Максимальная сумма, которую может снять клиент  :" << stoimost << endl;
}