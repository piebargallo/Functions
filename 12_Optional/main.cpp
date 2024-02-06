#include <iostream>
#include <optional>

std::optional<int> indice_numero(int numeros[], const size_t& contador, const int& numero)
{
    for (size_t i{}; i < contador; i++)
    {
        if (numeros[i] == numero)
        {
            return i;
        }
    }
    return {}; // std::nullopt
}

int main()
{
    int arreglo[]{ 11, 22, 33, 44, 55 };
    std::optional<int> indice = indice_numero(arreglo, 5, 44);
    
    if (indice.has_value()) {
        std::cout << "Numero encontrado en indice: "
            << indice.value() << std::endl;
    }
    else {
        std::cout << "Numero no encontrado" << std::endl;
    }

    return 0;
}

/* 
std::optional<int> numero{10};
if (numero.has_value())
    std::cout << numero.value() << std::endl;
else
    std::cout << "Valor no inicializado" << std::endl;
*/

/* 
std::optional<int> numero{std::nullopt}; // por defecto
if (numero.has_value())
    std::cout << numero.value() << std::endl;
else
    std::cout << "Valor no inicializado" << std::endl;
*/

