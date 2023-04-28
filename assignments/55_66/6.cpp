#include <iostream>
#include <cmath> // for pow()
using namespace std;

// // Write Your Function Here
// void thepower(int n, int power) { // Method 1 => pow() function
//     cout << pow(n, power) << '\n';
// }

void thepower(int n, int power) { // Method 2 => loop and multiply
    int result = 1;
    for (int i = 0; i < power; i++)
        result *= n;

    cout << result << '\n';
}

// int thepower(int n, int power) { // Method 3 => recursion ^_^ but you shuld write: cout << thepower(2, 5);
//     if (power == 0)
//         return 1;
//     else
//         return n * thepower(n, power - 1);
// }

int main()
{
    thepower(2, 5); // 32
    return 0;
}