#include <iostream>
using namespace std;

int main()
{
    // Output Needed
    // 30
    // 27
    // 24
    // 21
    // 18
    // 15
    // 12
    // 9
    // 6
    // 3

    cout << "with even numbers\n";
    for (int i = 30; i >= 3; i -= 3)
        cout << i << '\n';

    // Without Even Numbers
    // 27
    // 21
    // 15
    // 9
    // 3

    cout << "without even numbers\n";
    for (int i = 30; i >= 3; i -= 3)
        if (i % 2 != 0)
            cout << i << '\n';

    return 0;
}