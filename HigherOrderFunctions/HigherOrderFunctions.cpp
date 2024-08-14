#include <utility>

template<typename F, typename G>
auto f_of_g(F&& f, G&& g)
{
	return [f = std::forward<F>(f),
		g = std::forward<G>(g)]()
	{
		return f(g());
	};
}

int expensive_calculation()
{
	return +1;
}

int even_more_expensive()
{
	return +2;
}

int main(const int argc, const char* [])
{
	auto calculate = f_of_g(expensive_calculation, even_more_expensive);

	if (argc > 2) {
		return calculate();
	}
}