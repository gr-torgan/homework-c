#include "TEACHER.h"
//using namespace TEACHER;
using namespace std;
//����������� ��� ����������
TEACHER::TEACHER(void) :Person()
{
	subject = "";
	hour = 0;
}
//���������
TEACHER::~TEACHER(void)
{
}
//����������� � �����������
TEACHER::TEACHER(string M, int C, string P ,int G) :Person(M, C)
{
	subject = P;
	hour = G;
}
//����������� �����������
TEACHER::TEACHER(const TEACHER& L)
{
	name = L.name;
	age = L.age;
	subject = L.subject;
	hour = L.hour;
}
//�����������
void TEACHER::Set_hour(int G)
{
	hour = G;
}
void TEACHER::Set_subject(string P)
{
	subject = P;
}
//������� ������������
TEACHER& TEACHER::operator=(const TEACHER& l)
{
	if (&l == this)return *this;
	name = l.name;
	age = l.age;
	subject = l.subject;
	hour = l.hour;
	return *this;
}
//�������� �����
istream& operator>>(istream& in, TEACHER& l)
{
	cout << "\nname:"; in >> l.name;
	cout << "\nage:"; in >> l.age;
	cout << "\nsubject:"; in >> l.subject;
	cout << "\nhour:"; in >> l.hour;
	return in;
}
//�������� ������
ostream& operator<<(ostream& out, const TEACHER& l)
{
	out << "\nname : " << l.name;
	out << "\nage : " << l.age;
	out << "\nsubject : " << l.subject;
	out << "\nhour : " << l.hour;
	out << "\n";
	return out;
}