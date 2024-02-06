#include <iostream>

inline int sumar(int a, int b) { return a + b; }

int main()
{
	std::cout << sumar(10, 5) << std::endl;
	return 0;
}

// std::cout << [](int a, int b) { return (a + b); }(10, 5) << std::endl;