#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

union S
{
    string str;
    ~S() {}
};

int main()
{
    S s = { "Hello, world" };
    cout << "s.str = " << s.str << endl;
    s.str.~basic_string();
    return 0;
}