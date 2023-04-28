#include <iostream>
using namespace std;

// Write Your Function Here
int minpositive(int nums[], int len) {
    int min{};
    for (int i = 0; i < len; i++) { // get the first positive number
        if (nums[i] > 0) {
            min = nums[i];
            break;
        }
    }
    for (int i = 1; i < len; i++) {
        if (nums[i] < min && nums[i] > 0)
            min = nums[i];
    }
    return min;
}
int main()
{
    int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
    int numssize = size(numbers);
    cout << minpositive(numbers, numssize) << "\n";
    return 0;
}
