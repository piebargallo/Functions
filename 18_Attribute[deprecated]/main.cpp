#include <iostream>
using std::cout;
using std::endl;

[[deprecated("Unsafe method, please use...")]] void print() {}

int main()
{
	print();
	return 0;
}

// Output: warning 'void print()' is deprecated: Unsafe method, please use...