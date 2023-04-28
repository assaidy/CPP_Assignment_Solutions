#include <iostream>
using namespace std;

// Write Your Function Here
int sumall(int nums[], int len, int execlude) {
    int sum{};
    for (int i = 0; i < len; i++) {
        if (nums[i] == execlude)
            continue;
        sum += nums[i];
    }
    return sum;
}

int main()
{
    int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
    int numssize = size(numbers);
    int noneed = 13;
    cout << sumall(numbers, numssize, noneed) << "\n";
    return 0;
}