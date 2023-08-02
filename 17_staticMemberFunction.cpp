// C++ program to demonstrate static
// member function in a class
#include <iostream>

class GfG {
public:
	static void printMsg() { std::cout << "Welcome to GfG!" << std::endl; }
};

int main()
{
	GfG::printMsg();
	return 0;
}
