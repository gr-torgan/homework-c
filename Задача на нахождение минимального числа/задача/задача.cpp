#include <iostream>
#include <limits>

int main() {
    int a, min(std::numeric_limits<int>::max());
    for (;;) {
        std::cin >> a;
        if (!a) break;
        if (a < min) min = a;
    }
    std::cout << min;
    return 0;
}