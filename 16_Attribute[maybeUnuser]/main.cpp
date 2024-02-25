#include <iostream>
using std::cout;
using std::endl;

int func(int param1, [[maybe_unused]] int param2)
{
	return 44;
}

int main()
{
	cout << func(4, 4) << endl;
	return 0;
}