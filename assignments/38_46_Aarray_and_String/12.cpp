#include <iostream>
using namespace std;

int main()
{
    // Do Not Edit The Next 6 Lines
    int nums[] = {1, 2, 3, 5};
    int vals[] = {10, 20, 40, 30, 10, 60};
    int i1 = nums[3]; // 5
    int i2 = nums[0]; // 1
    int i3 = nums[1]; // 2
    int i4 = nums[2]; // 3

    // Need To Get Ouput 150
    // You Can Use Plus Operator Only

    // Your Code Here
    cout << vals[i1] + vals[i3] + vals[i2] + vals[3] << '\n'; // 60 + 40 + 20 + 30 = 150

    return 0;
}