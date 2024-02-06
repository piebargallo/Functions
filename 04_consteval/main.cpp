#include <iostream>

consteval int prod(int a, int b)
{
    return a * b;
}

int main()
{
    // interpretado en tiempo de compilación
    const int res1 = prod(3, 5);
    std::cout << "Tiempo compilacion: " << res1 << std::endl;

    return 0;
}