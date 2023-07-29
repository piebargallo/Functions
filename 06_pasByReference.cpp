// C++ program to illustrate
// call by reference
#include <iostream>

void swapnum(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

int main()
{
	int a = 10, b = 20;
	std::cout << "Before call to swapnum: " << a << "  " << b << std::endl;
	swapnum(&a, &b);
	std::cout << "After call to swapnum: " << a << "  " << b << std::endl;
	return 0;
}


