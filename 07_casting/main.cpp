#include <iostream>
#include <format>

int main()
{
	float myFloat{ 3.14f };
	int i3{ static_cast<int>(myFloat) }; 
	std::cout << std::format("Value of casting double to int: {}", i3) << std::endl;

	short someShort{ 16 };
	// no explicit cast needed
	long someLong{ someShort }; 
	std::cout << std::format("Value of casting someShort to someLong: {}", someLong) << std::endl;
	return 0;
}