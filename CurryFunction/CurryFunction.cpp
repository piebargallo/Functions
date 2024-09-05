// kind of like 'bind'
// more like 'bind_front'

// either
//    * returns a new function with N parameters bound
//    + executes the function 

int add(int x, int y, int z) { return x + y + z; }

// auto new_func == curry(add, 1, 2);
// auto result = new_func(4);
// expect result == 1 + 2 + 3 == 6

/*
template<typename Callable, typename ... Param>
auto bind(Callable callable, Param ... param)
{
	auto bound = [callable, param...](auto ... inner_param)
		{
			return callable(param..., inner_param...);
		};

	if constexpr (requires { callable(param...); }) {
		return callable(param...);
	}
	else {
		return bound;
	}
}
*/

// Curry function
template<typename Callable, typename... Params>
auto curry(Callable f, Params... ps)
{
	if constexpr (requires { f(ps...); }) {
		return f(ps...);
	}
	else {
		return [f, ps...](auto... qs)
			{
				if constexpr (requires { f(ps..., qs...); }) {
					return f(ps..., qs...);
				}
				else {
					return curry(f, ps..., qs...);
				}
			};
	}
}

int func1(int x, int y, int z) { return x + y + z; }

int main()
{
	const auto bound = curry(func1, 1, 2, 3);
	return bound;
}