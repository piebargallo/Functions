#include <string_view>
#include <format>
#include <iostream>
using std::cout;
using std::format;
using std::string_view;

struct S
{
	S() = default;
	explicit S(int) {}

	string_view get_value() {
		return "not-const";
	}

	string_view get_value() const {
		return "const";
	}
};

int main()
{
	S s;
	// const S s;
	cout << format("A string: '{}'\n", s.get_value());
}