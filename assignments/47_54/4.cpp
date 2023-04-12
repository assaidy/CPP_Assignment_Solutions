#include <iostream>
using namespace std;

int main()
{
    cout << "From for loop\n";
    for (int i = 0; i <= 18; i += 2)
        if (i % 2 == 0 && i != 10 && i != 12)
            cout << i << '\n';

    cout << "From while loop\n";
    int i = 0;
    while (i <= 18)
    {
        if (i % 2 == 0 && i != 10 && i != 12)
            cout << i << '\n';

        i += 2;
    }

    return 0;
}