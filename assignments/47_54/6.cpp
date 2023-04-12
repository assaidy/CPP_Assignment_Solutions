#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // Output Needed
    // 10
    // 100 = 10^2
    // 10000 = 10^2^2 = 10^4
    // 100000000 = 10^2^2^2 = 10^8

    cout << fixed << setprecision(0);

    cout << "From for loop\n";
    for (int i = 1; i <= 8; i *= 2)
        cout << pow(10, i) << '\n';

    cout << "From while loop\n";
    int i = 1;
    while (i <= 8)
    {
        cout << pow(10, i) << '\n';

        i *= 2;
    }

    return 0;
}