#include <iostream>

class Valor
{
	int m_valor{};
	
public:
	Valor(int valor) : m_valor{ valor } {}
	
	friend int mayor(const Valor& valor1, const Valor& valor2);
};
 
int mayor(const Valor& valor1, const Valor& valor2)
{
	return (valor1.m_valor > valor2.m_valor) ? 
		valor1.m_valor : valor2.m_valor;
}

int main()
{
	Valor x{ 3 };
	Valor y{ 4 };
	std::cout << mayor(x, y) << std::endl;
	return 0; 
}


