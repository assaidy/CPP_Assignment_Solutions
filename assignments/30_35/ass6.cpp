#include <iostream>

using namespace std;

int main()
{
    int age = 40;
    int points = 100;

    // Output Needed
    // "Age Data Is 4 Bytes"
    // "Age Is Ok"
    // "Points Is Ok"

    if (age > 18 && points > 50 && sizeof(age) == 4)
    {
        cout << "Age Data Is 4 Bytes\n";
        cout << "Age Is OK\n";
        cout << "Points Are OK\n";
    }

    return 0;
}