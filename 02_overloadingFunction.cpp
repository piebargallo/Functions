// program of function overloading when number of arguments vary
#include <iostream>

int add(int a, int b) 
{ 
	return a + b; 
}
	
int add(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	int add1{ add(4, 4) };
	std::cout << "Add1 is: " << add1 << std::endl;
	int add2{ add(1, 2, 3) };
	std::cout << "Add2 is: " << add2 << std::endl;
	
	return 0;
}


