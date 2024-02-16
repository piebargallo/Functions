#include <iostream>

constexpr int min(int x, int y) { return x < y ? x : y; }

int main()
{
    constexpr int m2 = min(-1, 2); // compile-time evaluation
    std::cout << m2 << std::endl;
    return 0;
}
