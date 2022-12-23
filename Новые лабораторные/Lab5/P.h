#pragma once
#include "object.h"
#include <string>
#include <iostream>
using namespace std;
class PERSON :
	public Object
{
public:
	PERSON(void);
public:
	virtual ~PERSON(void);
	void Show();//функция для просмотра атрибутов класса с помощью указателя
	PERSON(string, int);
	PERSON(const PERSON&);
	string Get_name() { return name; }
	int Get_age() { return age; }
	void Set_name(string);
	void Set_age(int);
	PERSON& operator=(const PERSON&);
	friend istream& operator>>(istream& in, PERSON& c);
	friend ostream& operator<<(ostream& out, const PERSON& c);
protected:
	string name;
	int age;
};