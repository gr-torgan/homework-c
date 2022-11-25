#pragma once
#include "Person.h"
//класс TEACHER наследуется от класса Person
class TEACHER :
	public Person
{
public:
	TEACHER(void);//конструктор без параметров
public:
	~TEACHER(void);//деструктор
	TEACHER(string, int,string, int);//конструктор с параметрами
	TEACHER(const TEACHER&);//конструктор копирования
	int Get_hour() { return hour; }//модификатор
	void Set_hour(int);//селектор
	string Get_subject() { return subject; }//модификатор
	void Set_subject(string);//селектор
	TEACHER& operator=(const TEACHER&);//операция присваивания
	friend istream& operator>>(istream& in, TEACHER& l);//операция ввода
	friend ostream& operator<<(ostream& out, const TEACHER& l); //операция вывода
protected:
	string subject;
	int hour;//атрибут
};