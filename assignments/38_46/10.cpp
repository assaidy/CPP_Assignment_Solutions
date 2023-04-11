#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    // "First: 10"
    // "Last: 50"

    // Method 1
    cout << "First: " << nums[0] << "   Last: " << nums[6 - 1] << '\n';

    // Method 2
    cout << "First: " << nums[0] << "   Last: " << nums[size(nums) - 1] << '\n';

    // Method 3
    cout << "First: " << nums[0] << "   Last: " << nums[sizeof(nums) / sizeof(nums[0]) - 1] << '\n';

    // Method 4
    cout << "First: " << *begin(nums) << "   Last: " << *(end(nums) - 1) << '\n';

    return 0;
}