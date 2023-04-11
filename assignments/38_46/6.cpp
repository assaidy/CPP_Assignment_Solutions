#include <iostream>
using namespace std;

int main()
{
    int vals[] = {10, 20, 30};

    // Write Your Code Here
    for (int i = 0; i < 3; i++)
        vals[i] *= 10;

    cout << vals[0] << "\n"; // 100
    cout << vals[1] << "\n"; // 200
    cout << vals[2] << "\n"; // 300

    return 0;
}