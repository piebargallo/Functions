#include <iostream>

struct S
{
	int data{};
	int get_data() {
		return data;
	}
};

int add(const int i, const int j)
{
	return i + j;
}

template <typename T>
T add(const T t1, const T t2)
{
	return t1 + t2;
}

template <typename T>
auto call(const T& func)
{
	return func(1, 1);
}

int main()
{
	auto add_lambda = [](const int i, const int j) {
		return i + j;
	};

	//return call(add_lambda);
	std::cout << call(add_lambda) << std::endl;
	return 0;
}