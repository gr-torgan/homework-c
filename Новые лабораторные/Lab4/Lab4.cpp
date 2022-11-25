#include <iostream>
#include "Person.h"
#include "TEACHER.h"
using namespace std;
// глобальные функции
void f1(Person& c)
{
	c.Set_name("Mihail");
	cout << c;
}
Person f2()
{
	TEACHER l("Natalia", 32, "Math", 85);
	return l;
}
int main()
{
	//работа с классом Person
	Person a;
	cin >> a;
	cout << a;
	Person b("Maxim", 27);
	cout << b;
	a = b;
	cout << a;
	//работа с классом TEACHER
	TEACHER c;
	cin >> c;
	cout << c;
	//принцип подстановки
	f1(c);//передаем объект класса TEACHER
	a = f2();//создаем в функции объект класса TEACHER
	cout << a;
	return 0;
}