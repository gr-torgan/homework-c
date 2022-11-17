#include <iostream>
using namespace std;
class Bancomat
{
	//атрибуты
	double naimenovanie;
	int kolichestvo;
	double stoimost;
public:
	Bancomat();//конструктор без параметров
	Bancomat(double, int, double);//конструктор с параметрами
	Bancomat(const Bancomat&);//конструктор копирования
	~Bancomat();//деструктор
	double get_naimenovanie();//селектор
	void set_naimenovanie(double);//модификатор
	int get_kolichestvo();//селектор
	void set_kolichestvo(int); //модификатор
	double get_stoimost();//селектор
	void set_stoimost(double); //модификатор
	void show();//просмотр атрибутов
};