#include <iostream>
#include <format>
using std::cout;
using std::endl;
using std::format;

union MyUnion {
    int intValue;
};

int main() {
    MyUnion myVar;
    myVar.intValue = 42;

    cout << format("Integer value: {}", myVar.intValue) << endl;
    return 0;
}
