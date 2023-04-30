#include <iostream>
using namespace std;

int main()
{
    // Output Needed
    // 001
    // 002
    // 003
    // 004
    // 005
    // 006
    // 007
    // 008
    // 009
    // 010
    // 011
    // 012
    // 013
    // 014
    // 015
    // 016
    // 017
    // 018
    // 019
    // 020
    // 100
    // 101
    // 102

    for (int i = 1; i <= 102; i++)
    {
        if (i < 10)
            cout << "00";
        else if (i <= 20)
            cout << "0";

        cout << i << '\n';

        if (i == 20)
        {
            cout << 100 << '\n';
            i = 100;
        }
    }

    return 0;
}