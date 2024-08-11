#include <iostream>

auto func(int param)
{
	int sum = 0;

	for (int i = param; i > 0; --i)
	{
		sum += i;
	}

	return sum;
}

int main()
{
	std::cout << func(4) << std::endl;
	return 0;
}