#include <iostream>

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
    ////////////////////////////////////////////////////////////////
    Pair& operator++ () {
        ++_a;
        return *this;
    }
    Pair& operator++ (int) {
        _b += 1.0;
        return *this;
    }

    friend bool operator < (const Pair&, const Pair&);
    friend bool operator > (const Pair&, const Pair&);

    friend std::ostream& operator<< (std::ostream&, const Pair&);
};

bool operator < (const Pair& lhs, const Pair& rhs) {
    return (lhs._a < rhs._a) && (lhs._b < lhs._b);
}
bool operator > (const Pair& lhs, const Pair& rhs) {
    return (lhs._a > rhs._a) && (lhs._b > lhs._b);
}

std::ostream& operator<< (std::ostream& ost, const Pair& obj) {
    return (ost << obj._a << " : " << obj._b);
}

// --- main --- 

int main()
{
    Pair p(4, 4.50);
    std::cout << "P   -> " << p << "\n\n";

    ++p; std::cout << "++P -> " << p << std::endl;
    p++; std::cout << "P++ -> " << p << std::endl;

    std::cout << std::endl;

    Pair p2;
    std::cout << "P2  -> " << p2 << "\n\n";

    if (p == p2)
        std::cout << "P == P2 \n";
    else
        std::cout << "P != P2 \n";

    system("PAUSE");
    return 0;
}