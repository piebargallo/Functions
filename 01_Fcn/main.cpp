#include <iostream>

void read_and_print(std::istream& is)    // read and print an int
{
    int x;
    if (is >> x)
        std::cout << "the int is " << x << '\n';
    else
        std::cerr << "no int on input\n";
}

int main()
{
    read_and_print(std::cin);
    return 0;
}