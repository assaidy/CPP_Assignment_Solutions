#include <iostream>
using namespace std;

// Write Your Function Here
int books(int sh1, int sh2, int sh3, int shelves) {
    sh1 *= 2, sh2 *= 4, sh3 *= 6;
    int spaces = shelves * 20;
    int filledSpaces = sh1 + sh2 + sh3;
    int freeSpaces = spaces - filledSpaces;

    return (spaces > filledSpaces) ? freeSpaces : 0;
}

int main()
{
    cout << books(10, 4, 3, 4) << "\n"; // 26
    cout << books(10, 4, 3, 2) << "\n"; // 0
    return 0;
}