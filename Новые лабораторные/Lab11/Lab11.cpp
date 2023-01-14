#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
typedef vector<int>Vec;
Vec make_vector(int n)
{
	Vec v;
	for (int i = 0; i < n; i++)
	{
		int a = rand() % 100 - 50;
		v.push_back(a);
	}
	return v;
}

void print_vector(Vec v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

}
int srednee(Vec v)
{
	int s = 0;
	for (int i = 0; i < v.size(); i++)
		s += v[i];
	int n = v.size();
	return s / n;
}
void add_vector(Vec& v, int el, int pos)
{
	v.insert(v.begin() + pos, el);
}
int max(Vec v)
{
	int m = v[0],
		n = 0;
	for (int i = 0; i < v.size(); i++)
		if (m < v[i])
		{
			m = v[i];
			n = i;
		}
	return n;
}

void del_vector(Vec& v, int pos)
{
	v.erase(v.begin() + pos);
}
int min(Vec v)
{
	int m = v[0],
		n = 0;
	for (int i = 0; i < v.size(); i++)
		if (m > v[i])
		{
			m = v[i];
			n = i;
		}
	return n;
}
void delenie(Vec& v)
{
	int m = min(v);
	for (int i = 0; i < v.size(); i++)
		v[i] = v[i] / v[m];
}
int main()
{
	try
	{
		vector<int> v;
		vector<int>::iterator vi = v.begin();
		int n;
		cout << "N?"; cin >> n;
		v = make_vector(n);
		print_vector(v);
		int el = srednee(v);
		cout << "pos?";
		int pos;
		cin >> pos;
		if (pos > v.size())throw 1;
		add_vector(v, el, pos);
		print_vector(v);
		int n_max = max(v);
		del_vector(v, n_max);
		print_vector(v);
		delenie(v);//
		print_vector(v);
	}
	catch (int)
	{
		cout << "error!";
	}
	return 0;
}