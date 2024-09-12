// unions can be anonymous (unnammed)
// only one member is active (alive) at a time
// you can only acces the currently active member
// * any other acces IS undefined behavior
// No member is the default member
// Unions can have constructors and destructors in C++11!

consteval auto use_union()
{
	union U {
		int i;
		float f;

		constexpr U() : i(42) {}
		constexpr U(float f) : f(f) {}

		constexpr U& operator=(int new_i) {
			i = new_i;
			return *this;
		}
	};

	U u(4.2);
	u = 32;

	return u.i;
}

int main() {
	[[maybe_unused]] constexpr auto v = use_union();
}