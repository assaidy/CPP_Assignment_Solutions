#include <iostream>
using namespace std;

int main()
{

    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;

    // Output Needed
    // "Character Of This ASCII Value 69 Is E"
    // "Character Of This ASCII Value 108 Is l"
    // "Character Of This ASCII Value 122 Is z"
    // "Character Of This ASCII Value 101 Is e"
    // "Character Of This ASCII Value 114 Is r"
    // "Character Of This ASCII Value 111 Is o"

    // Answer
    cout << "Character of This ASCII Value " << a << " Is " << char(a) << "\n";
    cout << "Character of This ASCII Value " << b << " Is " << char(b) << "\n";
    cout << "Character of This ASCII Value " << c << " Is " << char(c) << "\n";
    cout << "Character of This ASCII Value " << d << " Is " << char(d) << "\n";
    cout << "Character of This ASCII Value " << e << " Is " << char(e) << "\n";
    cout << "Character of This ASCII Value " << f << " Is " << char(f) << "\n";

    // Output Needed In Last Line
    // "Elzero"

    // Answer
    cout << char(a) + char(b) << char(c) << char(d) << char(e) << char(f) << endl;

    return 0;
}