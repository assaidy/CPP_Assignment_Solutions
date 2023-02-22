#include <iostream>
using namespace std;

int main()
{

    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;

    // Output Needed
    // "EWS"

    // Answer
    cout << "E - W - S \n" << int('E') << " - " << int('W') << " - " << int('S') << endl;
    cout << char(d - a) << char(c + d) << char(b + d) << endl;

    return 0;
}