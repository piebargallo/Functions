#include <iostream>

int read(std::istream& is)    
{
    int x;
    is >> x;
    // check for errors
    return x;
}

void print(std::ostream& os, int x)
{
    os << x << "\n";
}

int main()
{
    read(std::cin);
    print(std::cout, 4);
    return 0;
}