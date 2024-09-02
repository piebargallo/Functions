#include <string>

// is there a hidden copy?
// why isn´t it a reference?
// how does auto even work?

// 'auto' uses the exact same rules as template type parameters
// 'auto' will never deduce a '&'
// 'const' -ness will be deduced

/*void func(const auto& param);

std::string get_value();
const std::string &get_ref();

int main()
{
	auto &value = get_ref();
	func(value);
}*/

#include <map>

int main()
{
	const int* p = nullptr;
	int i{};

	auto* p_copy = p;
	decltype(auto) i_copy = i;
	i_copy = 4;

	p_copy = &i;
}