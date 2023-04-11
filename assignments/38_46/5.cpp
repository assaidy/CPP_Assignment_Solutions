#include <iostream>
using namespace std;

// <!!> Uncomment one case at a time

int main()
{
    // Example 1
    // int vals[] = {100, 200, 600, 200, 100};

    // Output
    // "Array Is Palindrome"

    // Example 2
    // int vals[] = {100, 200, 200, 100};

    // Output
    // "Array Is Palindrome"

    // Example 3
    // int vals[] = {100, 300, 600, 200, 100};

    // Output
    // "Array Is Not Palindrome"

    // Answer
    bool palindrome = true;

    for (int i = 0; i < size(vals) / 2; i++)
    {
        if (vals[i] != vals[size(vals) - i - 1])
            palindrome = false;
    }

    if (palindrome)
        cout << "Array is palindrome\n";
    else
        cout << "Array is not palindrome\n";

    return 0;
}