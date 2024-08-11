#include <string>
#include <string_view>
#include <iostream>

struct S
{
	static std::string_view s() {
		return "Hello world"; 
	}
};

int main() {}