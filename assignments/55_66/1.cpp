#include <iostream>
using namespace std;

// Write Your Function Here
int calcspecial(int n1, int n2) {
    if (n1 == n2)
        return n1 + n2;
    else
        return abs(n1 - n2);
}


int main()
{
    cout << calcspecial(40, 40) << "\n";    // First = Second -> 40 + 40 = 80
    cout << calcspecial(200, 50) << "\n";   // First > Second -> 200 - 50 = 150
    cout << calcspecial(100, 300) << "\n";  // First < Second -> 300 - 100 = 200
    return 0;
}