#include "L.h"
TEACHER::TEACHER(void) :PERSON()
{
	time = 0;
}
TEACHER::~TEACHER(void)
{
}
TEACHER::TEACHER(string M, int C,int G) :PERSON(M, C)
{
	time = G;
}
TEACHER::TEACHER(const TEACHER& L)
{
	name = L.name;
	age = L.age;
	time = L.time;
}
void TEACHER::Set_time(int G)
{
	time = G;
}
TEACHER& TEACHER::operator=(const TEACHER& l)
{
	if (&l == this)return *this;
	name = l.name;
	age = l.age;
	return *this;
}
istream& operator>>(istream& in, TEACHER& l)
{
	cout << "\nname:"; in >> l.name;
	cout << "\nage:"; in >> l.age;
	cout << "\ntime:"; in >> l.time;
	return in;
}
ostream& operator<<(ostream& out, const TEACHER& l)
{
	out << "\nname : " << l.name;
	out << "\nage : " << l.age;
	out << "\ntime : " << l.time;
	out << "\n";
	return out;
}
void TEACHER::Show()
{
	cout << "\nname : " << name;
	cout << "\nage : " << age;
	cout << "\ntime : " << time;
	cout << "\n";
}