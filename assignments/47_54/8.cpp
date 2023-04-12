#include <iostream>
using namespace std;

int main()
{
    // Output Needed
    // 2
    // 6
    // 14
    // 30
    // 62
    // 126

    cout << "From for loop\n";
    for (int i = 2; i <= 126; i = (i + 1) * 2)
        cout << i << '\n';

    cout << "From while loop\n";
    int i = 2;
    while (i <= 126)
    {
        cout << i << '\n';

        i = (i + 1) * 2;
    }

    return 0;
}