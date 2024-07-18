#include <iostream>
using std::cout;
using std::endl;

int main() {
    int value = 10;
    volatile int volatileValue = 20;

    value++; 
    volatileValue++; 

    cout << "Valor normal: " << value << endl;
    cout << "Valor volatil: " << volatileValue << endl;

    return 0;
}
