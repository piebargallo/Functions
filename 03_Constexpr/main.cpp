#include <iostream>

constexpr int prod(int a, int b)
{
    return a * b;
}

int main()
{
    // interpretado en tiempo de compilación
    constexpr int res1 = prod(3, 5);
    std::cout << "Tiempo compilacion: " << res1 << std::endl;

    // interpretado en tiempo de ejecución
    int a{ 5 }, b{ 10 };
    int res2 = prod(a, b);
    std::cout << "Tiempo ejecucion: " << res2 << std::endl;
    
    return 0;
}