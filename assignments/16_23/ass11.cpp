#include <iostream>
#include <cmath>
#include <typeinfo>
using namespace std;

int main()
{

    // Do Not Edit Here
    short int a = 100;
    float b = 98.5f;
    double c = 1.7;

    // Edit This Line And Use Type Casting To Get The Output
    cout << a + int(b) + (int)c + 1 << "\n";                // 200
    cout << typeid(a + int(b) + (int)c + 1).name() << "\n"; // i => int

    cout << a + (int)round(b) + int(c) << "\n";                // 200
    cout << typeid(a + (int)round(b) + int(c)).name() << "\n"; // i => int

    cout << a + int(b) + int(round(c)) << "\n";                // 200
    cout << typeid(a + int(b) + (int)round(c)).name() << "\n"; // i => int

    return 0;
}