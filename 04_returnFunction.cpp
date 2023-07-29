// C++ code to illustrate Methods returning
// a value using return statement
#include <iostream>

int sum(int a, int b)
{
	return a + b;
}

// Driver method
int main()
{
	int c{ sum(1, 1) };
	std::cout << "The sum is " << c << std::endl;
	return 0;
}
