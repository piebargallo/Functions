// C++ Program to demonstrate working of a function
#include <iostream>

int max(int x, int y)
{
	return (x > y) ? x : y;
}

int main()
{
	int z{ max(4, 5) };
	std::cout << "Max is: " << z << std::endl;
	
	return 0;
}
