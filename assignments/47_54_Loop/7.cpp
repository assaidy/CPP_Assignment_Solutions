#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    // Output Needed
    // 2
    // 4
    // 8
    // 16
    // 32
    // 64
    // 128

    cout << "From for loop\n";
    for (int i = 1; i <= 7; i++)
        cout << pow(2, i) << '\n';

    cout << "From while loop\n";
    int i = 1;
    while (i <= 7)
    {
        cout << pow(2, i) << '\n';

        i++;
    }

    return 0;
}