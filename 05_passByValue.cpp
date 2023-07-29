// C++ program to illustrate
// call by value
#include <iostream>

void func(int a, int b)
{
	a += b; // a = a + b;
	std::cout << "In func, a = " << a << " b = " << b << std::endl;
}

int main()
{
	int x = 5, y = 7;
	func(x, y);
	std::cout << "In main, x = " << x << " y = " << y << std::endl;
	return 0;
}


