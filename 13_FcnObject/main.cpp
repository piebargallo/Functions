#include <iostream>
#include <functional>

double sumar(double x, double y) { return x + y; }
double restar(double x, double y) { return x - y; }
double producto(double x, double y) { return x * y; }
double dividir(double x, double y) { return x / y; }

// función wrapper que ejecuta nuestras funciones aritméticas,
// pero a su vez muestra algún tipo de información.

// std::function<return_type(arg1, .., argn)> obj;
// return_type var = obj(arg1, ..., argn);

// Paso de función utilizando std::function
double invocar(std::function<double(double, double)> func, double x, double y)
{
    return func(x, y);
}

int main()
{
    std::cout << invocar(&sumar, 3.45, 5.3) << std::endl;
    std::cout << invocar(&restar, 3.45, 5.3) << std::endl;
    std::cout << invocar(&producto, 3.45, 5.3) << std::endl;
    std::cout << invocar(&dividir, 3.45, 5.3) << std::endl;

    return 0;
}