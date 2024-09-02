void do_something() {}
void do_something_else() {}
int return_something() { return 0; }

static const int& return_something_else() { return 0; }

enum struct Val {
	Val1,
	Val2
};

void call_a_func(Val v)
{
	switch (v) {
	case Val::Val1: return do_something();
	case Val::Val2: return do_something_else();
	}
}

decltype(auto) call(auto Func)
{
	return Func();
}

int main()
{
	call(do_something);
	call(return_something);

	const int& i = call(return_something_else);
}