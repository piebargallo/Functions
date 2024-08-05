#include <exception>
#include <functional>
#include <iostream>

extern void do_thing() {}

void lippincott()
{
	try {
		throw;
	}
	catch (const std::runtime_error&) {
		std::clog << "runtyme_error";
	}
	catch (const std::exception&) {
		std::clog << "exception";
	}
	catch (...) {
		std::clog << "unknown";
	}
}

void func()
{
	try {
		do_thing();
	}
	catch (...) {
		lippincott();
	}
}

int main()
{}
