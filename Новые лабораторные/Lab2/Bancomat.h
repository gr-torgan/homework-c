#include <iostream>
using namespace std;
class Bancomat
{
	//��������
	double naimenovanie;
	int kolichestvo;
	double stoimost;
public:
	Bancomat();//����������� ��� ����������
	Bancomat(double, int, double);//����������� � �����������
	Bancomat(const Bancomat&);//����������� �����������
	~Bancomat();//����������
	double get_naimenovanie();//��������
	void set_naimenovanie(double);//�����������
	int get_kolichestvo();//��������
	void set_kolichestvo(int); //�����������
	double get_stoimost();//��������
	void set_stoimost(double); //�����������
	void show();//�������� ���������
};