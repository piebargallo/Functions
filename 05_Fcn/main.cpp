#include <iostream>

template<class T>
auto square(T t) { return t * t; }

int main()
{
    int number = 5;  // Ejemplo: número entero
    double value = 3.14;  // Ejemplo: número de punto flotante

    // Llama a la función square y almacena el resultado
    auto result1 = square(number);
    auto result2 = square(value);

    // Muestra los resultados
    std::cout << "El cuadrado de " << number << " es " << result1 << std::endl;
    std::cout << "El cuadrado de " << value << " es " << result2 << std::endl;
	return 0;
}