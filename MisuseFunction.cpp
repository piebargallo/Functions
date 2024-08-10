#include <iostream>

struct S
{
	int val{ 0 };
	int increment_value() {
		return ++val;
	} 
};

int main()
{
	S s;
	int i = s.increment_value();
	i += s.increment_value();
	std::cout << s.val << std::endl;
	return 0;
}

