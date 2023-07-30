#include <iostream>

template<typename T, typename U>
auto mayor(T x, U y)
{
	return (x > y) ? x : y;
}

int main()
{
	std::cout << mayor(1, 1.1) << std::endl;
	std::cout << mayor(2.2, 3.3) << std::endl;
	return 0;
}