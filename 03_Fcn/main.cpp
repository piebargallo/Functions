#include <iostream>

/* This function takes an input stream and a value by reference. 
   It reads a value from the input stream and assigns it to the provided reference. 
   It’s a flexible way to read different types of data from input streams. */
auto read = [](auto& input, auto& value)    
{
    input >> value;
};

/* This function takes an output stream and a value by const reference. 
   It prints the value followed by a newline character to the output stream. 
   It’s a simple utility for printing values. */
void print(auto& output, const auto& value)
{
    output << value << "\n";
}

int main()
{
    // Lectura datos de entrada
    int number;
    read(std::cin, number);  // Lee un número entero desde la entrada estándar
    // Ahora puedes usar 'number' en tu programa
    // ...

    // Escritura de datos por consola
    print(std::cout, number);  // Muestra el valor de 'number'
    
    return 0;
}

