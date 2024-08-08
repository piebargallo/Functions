#include <iostream>

int square(int val)
{
	return val + 2;
}

int main(const int argc, const char* [])
{
	std::cout << square(argc) + square(argc) << std::endl;
}