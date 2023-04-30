#include <iostream>
using namespace std;

// Write Your Function Here
string swapping(string str) {
    for (char& c : str) {
        if (c != 'h' && c != 'H') {
            if (isupper(c))
                c = char(c + 32);
            else if (islower(c))
                c = char(c - 32);
        }
    }
    return str;
}

int main()
{
    cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
    return 0;
}