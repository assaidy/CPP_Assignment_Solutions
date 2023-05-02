#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
    vector<int>::iterator it = numbers.begin();

    // Write Method One
    // advance(it, -1 * (-1 - 1 - 1 - 1));

    // Write Method Two
    // it++, it++, it++, it++;

    // Write Method Three
    // it = numbers.end() - 1;
    // advance(it, -1 - 1 - 1);

    cout << *it << "\n"; // 50
    return 0;
}