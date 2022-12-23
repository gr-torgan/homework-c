#include "P.h"
PERSON::PERSON(void)
{
	name = "";
	age = 0;
}
PERSON::~PERSON(void)
{
}
PERSON::PERSON(string M, int C)
{
	name = M;
	age = C;
}
PERSON::PERSON(const PERSON& PERSON)
{
	name = PERSON.name;
	age = PERSON.age;
}
void PERSON::Set_age(int C)
{
	age = C;
}
void PERSON::Set_name(string M)
{
	name = M;
}
PERSON& PERSON::operator=(const PERSON& c)
{
	if (&c == this)return *this;
	name = c.name;
	age = c.age;
	return *this;
}
istream& operator>>(istream& in, PERSON& c)
{
	cout << "\nname:"; in >> c.name;
	cout << "\nage:"; in >> c.age;
	return in;
}
ostream& operator<<(ostream& out, const PERSON& c)
{
	out << "\nname : " << c.name;
	out << "\nage : " << c.age;
	out << "\n";
	return out;
}
void PERSON::Show()
{
	cout << "\nname : " << name;
	cout << "\nage : " << age;
	cout << "\n";
}