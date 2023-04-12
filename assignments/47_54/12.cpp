#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};

    // Output Needed
    // 10
    // 14
    // 40
    // 15

    for (int i = 0; i < size(nums) - 1; i++)
        if (nums[i] * 2 == nums[i + 1])
            cout << nums[i] << '\n';

    return 0;
}