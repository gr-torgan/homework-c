#include "Object.h"
#include "P.h"
#include "L.h"
#include "Vector.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
	Vector v(5);//вектор из 5 элементов
	PERSON a;//объект класса C
	cin >> a;
	TEACHER b;// объект класса L
	cin >> b;
	Object* p = &a;//ставим указатель на объект класса C
	v.Add(p);//добавляем объект в вектор
	p = &b;//ставим указатель на объект класса L
	v.Add(p); //добавляем объект в вектор
	cout << v;//вывод вектора
}