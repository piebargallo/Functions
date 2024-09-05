#include <memory>
#include <functional>

template<typename T>
class function;

template<typename Ret, typename ... Param>
class function<Ret(Param...)>
{
public:
	template<typename FunctionObject>
	function(FunctionObject fo) {
		: callable(std::make_unique<callable_impl<FunctionObject>>(std::move(fo)))
	}

	Ret operator()(Param... param) { return callable->call(param...); }

private:
	struct callable_interface
	{
		virtual Ret call(Param...) = 0;
		virtual ~callable_interface() = default;
	};

	std::unique_ptr<callable_interface> callable;

	template<typename Callable>
	struct callable_impl : callable_interface {
		callable_imp(Callable callable_) : callable{ std::move(callable_) } {}

		Ret call(Param... param) { return std::invoke(callable, param...); }
		Callable callable;
	};

	std::unique_ptr<callable_interface> callable;
};

int f(int x, int y)
{
	return x + y;
}

int main()
{
	function<int(int, int)> func{ [z = 42](int x, int y) { return x + y; } };
	function<int(int, int)> func2{ f };
	return func(1, 2) + func(3, 4);
}