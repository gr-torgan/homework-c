#include "stdafx.h"
#include "Header.h"
#include <iostream>
#include <fstream>
double const con = 15;
class Pair
{
	
private:
	int    _a;
	double _b;

public:
	
	Pair()
		: _a(0), _b(0) { }

	Pair(int a, double b)
		: _a(a), _b(b) { }

	~Pair() { }
	Pair& operator-- () {
		_a=_a-con;
		return *this;
	}
	Pair& operator-- (int) {
		_b=_b-con;
		return *this;
	}

	friend bool operator == (const Pair&, const Pair&);
	friend bool operator != (const Pair&, const Pair&);

	friend std::ostream& operator<< (std::ostream&, const Pair&);
};

bool operator == (const Pair& lhs, const Pair& rhs) {
	return (lhs._a == rhs._a) && (lhs._b == lhs._b);
}
bool operator != (const Pair& lhs, const Pair& rhs) {
	return (lhs._a != rhs._a) && (lhs._b != lhs._b);
}

std::ostream& operator<< (std::ostream& ost, const Pair& obj) {
	return (ost << obj._a << " : " << obj._b);
}

int main()
{
	//double const con = 15.5;
	Pair p(20, 20.50);
	std::cout << "P   -> " << p << "\n\n";
	int pr = con;
	std::cout << "Const. = " << con << std::endl;
	if (pr == con)
	{
		--p; std::cout << "P - Const. -> " << p << std::endl;
		
	}
	else
	{
		p--; std::cout << "P - Const. -> " << p << std::endl;
	}

	std::cout << std::endl;

	Pair p2(5, 20.50);
	std::cout << "P2  -> " << p2 << "\n\n";

	if (p == p2)
		std::cout << "P == P2 \n";
	else
		std::cout << "P != P2 \n";

	std::ofstream fo;
	/*fo.open("file.txt", std::ofstream::app);
	if (!fo.is_open()) {
		std::cout << "error";
	}
	else
	{
		fo << "\nnew data";
	};*/


	system("PAUSE");
	return 0;
}