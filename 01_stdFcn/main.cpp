#include <iostream>
#include <functional>
#include <format>
#include <string_view>

void func(int num, std::string_view str)
{
	std::cout << format("func({}, {})", num, str) << std::endl;
}

int main()
{
	// With class template argument deduction
	std::function f1{ func };
	f1(1, "test");
	return 0;
}