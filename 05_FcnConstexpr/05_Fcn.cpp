#include <iostream>

// constexpr indica que el valor devuelto de la fcn es un valor
// constante que se puede calcular en tiempo de compilación
constexpr float exp(float x, int n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
};

int main() {
    constexpr float y = exp(3.14, 3);
    std::cout << "The value of y is: " << y << std::endl;
    return 0;
}