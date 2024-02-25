#include <iostream>
using std::cout;
using std::endl;

[[noreturn]] void print()
{
	cout << "The end" << endl;
}

int main()
{
	print();
	return 0;
}

