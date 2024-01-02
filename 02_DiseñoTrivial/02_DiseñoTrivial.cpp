struct Trivial
{
	int i;
private:
	int j;
};

struct Trivial2
{
	int i;
	Trivial2(int a, int b) : i(a), j(b) {}
	Trivial2() = default;
private:
	int j;   // Different access control
};