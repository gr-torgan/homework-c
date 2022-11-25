#pragma once
#include "Person.h"
//����� TEACHER ����������� �� ������ Person
class TEACHER :
	public Person
{
public:
	TEACHER(void);//����������� ��� ����������
public:
	~TEACHER(void);//����������
	TEACHER(string, int,string, int);//����������� � �����������
	TEACHER(const TEACHER&);//����������� �����������
	int Get_hour() { return hour; }//�����������
	void Set_hour(int);//��������
	string Get_subject() { return subject; }//�����������
	void Set_subject(string);//��������
	TEACHER& operator=(const TEACHER&);//�������� ������������
	friend istream& operator>>(istream& in, TEACHER& l);//�������� �����
	friend ostream& operator<<(ostream& out, const TEACHER& l); //�������� ������
protected:
	string subject;
	int hour;//�������
};