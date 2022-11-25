#include "TEACHER.h"
//using namespace TEACHER;
using namespace std;
//конструктор без параметров
TEACHER::TEACHER(void) :Person()
{
	subject = "";
	hour = 0;
}
//дестрктор
TEACHER::~TEACHER(void)
{
}
//конструктор с параметрами
TEACHER::TEACHER(string M, int C, string P ,int G) :Person(M, C)
{
	subject = P;
	hour = G;
}
//конструктор копирования
TEACHER::TEACHER(const TEACHER& L)
{
	name = L.name;
	age = L.age;
	subject = L.subject;
	hour = L.hour;
}
//модификатор
void TEACHER::Set_hour(int G)
{
	hour = G;
}
void TEACHER::Set_subject(string P)
{
	subject = P;
}
//оперция присваивания
TEACHER& TEACHER::operator=(const TEACHER& l)
{
	if (&l == this)return *this;
	name = l.name;
	age = l.age;
	subject = l.subject;
	hour = l.hour;
	return *this;
}
//операция ввода
istream& operator>>(istream& in, TEACHER& l)
{
	cout << "\nname:"; in >> l.name;
	cout << "\nage:"; in >> l.age;
	cout << "\nsubject:"; in >> l.subject;
	cout << "\nhour:"; in >> l.hour;
	return in;
}
//операция вывода
ostream& operator<<(ostream& out, const TEACHER& l)
{
	out << "\nname : " << l.name;
	out << "\nage : " << l.age;
	out << "\nsubject : " << l.subject;
	out << "\nhour : " << l.hour;
	out << "\n";
	return out;
}