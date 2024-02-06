#include <iostream>
#include <string>

void info(std::string_view name = "Hector", int age = 32)
{
    std::cout << "Nombre: " << name
        << ", edad: " << age << std::endl;
}

int main()
{
    info();           // Nombre: Hector, edad: 32
    info("Juan", 47); // Nombre: Juan, edad: 47
    return 0;
}