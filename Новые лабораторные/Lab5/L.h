#pragma once
#include "P.h"
class TEACHER :
	public PERSON
{
public:
	TEACHER(void);
public:
	~TEACHER(void);
	void Show();//функция для просмотра атрибутов класса с помощью указателя
	TEACHER(string, int, int);
	TEACHER(const TEACHER&);
	int Get_time() { return time; }
	void Set_time(int);
	TEACHER& operator=(const TEACHER&);
	friend istream& operator>>(istream& in, TEACHER& l);
	friend ostream& operator<<(ostream& out, const TEACHER& l);
protected:
	int time;
};