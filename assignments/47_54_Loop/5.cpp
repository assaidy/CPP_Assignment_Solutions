#include <iostream>
using namespace std;

int main()
{
    cout << "From for loop\n";
    for (int i = 0; i <= 27; i += 3)
        cout << i << '\n';

    cout << "From while loop\n";
    int i = 0;
    while (i <= 27)
    {
        cout << i << '\n';

        i += 3;
    }
    

    return 0;
}