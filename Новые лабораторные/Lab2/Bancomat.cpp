#include "Bancomat.h"
#include <iostream>
using namespace std;
//����������� ��� ����������
Bancomat::Bancomat()
{
	naimenovanie = 0;
	kolichestvo = 0;
	stoimost = 0;
	cout << "����������� ��� ���������� ��� ������� " << this << endl;
}
//����������� � �����������
Bancomat::Bancomat(double N, int K, double S)
{
	naimenovanie = N;
	kolichestvo = K;
	stoimost = S;
	cout << "����������� � ����������� ��� �������" << this << endl;
}
//����������� �����������
Bancomat::Bancomat(const Bancomat& t)
{
	naimenovanie = t.naimenovanie;
	kolichestvo = t.kolichestvo;
	stoimost = t.stoimost;
	cout << "����������� ����������� ��� ������� " << this << endl;
}
//����������
Bancomat::~Bancomat()
{
	cout << "���������� ��� ������� " << this << endl;
}
//���������
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
//������������
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
//����� ��� ��������� ���������
void Bancomat::show()
{	
	cout << "����������������� �����  :" << kolichestvo << endl;
	cout << "������� ����� � ���������  :" << naimenovanie << endl;
	cout << "������������ �����, ������� ����� ����� ������  :" << stoimost << endl;
}