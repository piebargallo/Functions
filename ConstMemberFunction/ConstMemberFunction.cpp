#include <iostream>
#include <format>
#include <string>

// struct is default public for everithing
// class is default private for everithing
struct S
{
	std::size_t size() const
	{
		return m_size;
	}

private:
	std::size_t m_size{};
};

int main()
{
	const std::string my_str;
	//return my_str.size();

	[[maybe_unused]] const std::string& str_ref = my_str;

	std::cout << std::format("string size: {}", my_str.size())
		<< std::endl;
}