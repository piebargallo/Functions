#include <iostream>
using std::cout;
using std::endl;

[[nodiscard("Some explanation")]] int func()
{
	return 44;
}

int main()
{
	//func();
	cout << func() << endl;
	return 0;
}