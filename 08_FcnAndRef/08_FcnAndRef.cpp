#include <iostream>
using namespace std;

double f_cuadrado(double x) {
	return x * x;
}

void a_cuadrado(double x, double& resultado) {
	resultado = x * x;
}

int main() {
	double r, f_receptor, a_receptor;
	cin >> r;
	
	f_receptor = f_cuadrado(r);
	cout << f_receptor << endl;
	
	a_cuadrado(r, a_receptor);
	cout << a_receptor << endl;
	return 0;
}