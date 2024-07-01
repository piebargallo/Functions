#include <iostream>
using namespace std;

int Suma(const int& a, const int& b) {
    return a + b;
}
 
int main()
{
    int resultado = Suma(4, 4);
    cout << "Resultado: " << resultado << endl;
    return 0;
}
