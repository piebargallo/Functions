#include <iostream>
#include <string>
using std::string;
using std::cout;

// El parámetro es una copia de str.
void imprimirPorValor(string val)
{
	// Imprime el valor a través de la copia.
	cout << val << '\n';
}

// El parámetro es una referencia que enlaza a str.
// Opción preferida.
void imprimirPorReferencia(const string& ref)
{
	// Imprime el valor a través de una referencia.
	cout << ref << '\n';
}

// El parámetro es un puntero que contiene la dirección de str.
//  "   "   "   espera un puntero no un objeto.
void imprimirPorDireccion(const string* ptr)
{
	// Imprime el valor a través de un puntero de dirección
	// la func usa el operador de indirección para acceder al valor del objeto.
	cout << *ptr << '\n';
}

int main()
{
	string str{ "Hola torrijas" };

	imprimirPorValor(str);
	imprimirPorReferencia(str);
	// Pasar por dirección no proporciona un objeto, sino su dirección en memoria.
	imprimirPorDireccion(&str);

	return 0;
}
