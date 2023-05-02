#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = { 5, 4, 3, 2, 1 };

    // Method One
    // reverse(nums.begin(), nums.end());

    // Method Two
    // sort(nums.begin(), nums.end());

    // Method Three -> Use Swap + Loop For Challenge
    // for (int i = 0; i < size(nums) / 2; i++) {
    //     swap(nums.at(i), nums.at(size(nums) - 1 - i));
    // }

    for (int i : nums)
    {
        cout << i << "\n";
    }

    return 0;
}

// Needed Output
// 1
// 2
// 3
// 4
// 5