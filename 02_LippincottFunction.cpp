#include <stdexcept>
#include <iostream>
#include <functional>

void lippincott()
{
	try {
		throw;
	}
	catch (const std::range_error &) {
		std::clog << "range_error";
	}
	catch (const std::runtime_error &) {
		std::clog << "runtime_error";
	}
	catch (const std::bad_function_call &) {
		std::clog << "bad_function_call";
	}
}

template <typename T>
struct S
{
	static void do_thing()
	{
		try {
			func(T{});
		}
		catch (...) {
			lippincott();
		}
	}
};

int main() {}