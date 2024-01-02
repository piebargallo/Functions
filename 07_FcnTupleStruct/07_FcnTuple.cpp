#include <tuple>
#include <string>
#include <iostream>

using namespace std;

tuple<int, string, double> f()
{
    int i{ 108 };
    string s{ "Some text" };
    double d{ .01 };
    return { i,s,d };
}
struct S
{
    string name;
    int num;
};

S g()
{
    string t{ "hello" };
    int u{ 42 };
    return { t, u };
}

int main()
{
    auto [x, y, z] = f(); // init from tuple
    cout << x << " " << y << " " << z << endl;

    auto [a, b] = g(); // init from POD struct
    cout << a << " " << b << endl;
    return 0;
}