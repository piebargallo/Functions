#include <iostream>

// Dos arg posicionales argc(contador de arg), y un arreglo de
// ptrs char* el argv(arg values)
int main(int argc, char* argv[])  // También definible como char **argv
{
    for (int i{ 0 }; i < argc; i++)
    {
        std::cout << "Argumento [" << i << "]: " << argv[i] << std::endl;
    }
    return 0;
}