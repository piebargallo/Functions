#include <utility>
#include <functional>

struct S
{
	int i{ 10 };
	int j{ 13 };

	int get_i() const {
		return i;
	}

	int get_i_plus_10() const {
		return i + 2;
	}

	int operator()(int k) {
		return i + j + k;
	}
};

int main(const int argc, const char* [])
{
	S s;
	return s(argc);
}
