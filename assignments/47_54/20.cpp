#include <iostream>
using namespace std;

int main()
{
    string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
    // Output Needed
    // "Osama"
    // "Ahmed"
    // "Hagar"
    // "Salwa"

    for (string name : names)
        if (name.length() == 5)
            cout << name << '\n';

    return 0;
}