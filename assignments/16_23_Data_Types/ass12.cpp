#include <iostream>
using namespace std;

int main()
{

    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

    // Change ??? To Something Else To Get The Output
    cout << (a) - (a - 12) << "\n";                 // 12
    cout << (int(c) * 2) + (int(c) * 2) << "\n";    // 20
    cout << (int(c) - 1) * (int(c) + 3) << "\n";    // 32
    cout << a * (int(c)) << "\n";                   // 5000
    cout << char((a / 100) * (int(c) + 3)) << "\n"; // P
    return 0;
}