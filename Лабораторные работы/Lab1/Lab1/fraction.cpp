#include <iostream>
#include "fraction.h"
using namespace std;
//���������� ������ ��� ������������� ����� ���������
void fraction::Init(int F, double S)
{
	first = F; second = S;
}
//���������� ������ ��� ������ �������� ����� ���������
void fraction::Read()
{
	cout << "\nfirst?"; cin >> first;
	cout << "\nsecond?"; cin >> second;
	
}
//���������� ������ ��� ������ �������� ����� ���������
void fraction::Show()
{
	cout << "\nfirst=" << first;
	cout << "\nsecond=" << second;
	cout << "\n";
}
//����� ��� ���������� � �������
double fraction:: Multiply(int k)
{
	double cel = first;
	cout << "\nK?"; cin >> k;
	return (k*(cel+second));
}