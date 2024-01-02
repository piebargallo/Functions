struct Base
{
	void Foo() {}
};

// std::is_standard_layout<Derived> == true
struct Derived : public Base
{
	int x;
	int y;
};