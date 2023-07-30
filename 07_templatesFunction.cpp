#include <iostream>

template <typename T>
T mayor(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	std::cout << mayor<int>(1, 2) << std::endl;
	std::cout << mayor<double>(3.5, 3.6) << std::endl;
	std::cout << mayor<int>(2, 4) << std::endl;
	std::cout << mayor<double>(1.1, 2.2) << std::endl;
	return 0;
}