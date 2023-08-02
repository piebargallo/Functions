// CPP program to illustrate class objects as static
#include <iostream>

class GfG {
	int i = 0;

public:
	GfG()
	{
		i = 0;
		std::cout << "Inside Constructor\n";
	}

	~GfG() { std::cout << "Inside Destructor\n"; }
};

int main()
{
	int x = 0;
	if (x == 0) {
		static GfG obj;
	}
	std::cout << "End of main\n";
	return 0;
}
