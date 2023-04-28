#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative(int nums[], int len) {
    int max = nums[0];
    for (int i = 1; i < len; i++) {
        if (nums[i] > max && nums[i] < 0)
            max = nums[i];
    }
    return max;
}

int main()
{
    int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
    int numssize = size(numbers);
    cout << firstnegative(numbers, numssize) << "\n";
    return 0;
}