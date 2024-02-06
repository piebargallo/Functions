#include <iostream>

int& max(int& a, int& b)
{
    return a > b ? a : b; // bien, referencias externos
}

int main()
{
    int a{ 11 }, b{ 14 };
    std::cout << "Max: " << max(a, b) << std::endl;
    return 0;
}
