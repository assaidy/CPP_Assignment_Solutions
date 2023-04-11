#include <iostream>
using namespace std;

// <!!> Uncomment the TEST CASE you want to test

int main()
{
    // Example 1
    // int check = 25;
    // int nums[]{40, 20, 30, 70, 100};

    // Ouput
    // "{40} + {70} = 110"

    // Example 2
    // int check = 25;
    // int nums[]{20, 35, 30, 70, 100};

    // Ouput
    // "{35} + {70} = 105"

    // Example 3
    // int check = 25;
    // int nums[]{20, 25, 30, 70, 100};

    // Ouput
    // "{30} + {70} = 100"

    // Answer 
    if (nums[0] > check)
        cout << "{" << nums[0] << "} + {" << nums[3] << "} = " << nums[0] + nums[3] << '\n';
    else if (nums[1] > check)
        cout << "{" << nums[1] << "} + {" << nums[3] << "} = " << nums[1] + nums[3] << '\n';
    else if (nums[2] > check)
        cout << "{" << nums[2] << "} + {" << nums[3] << "} = " << nums[2] + nums[3] << '\n';

    return 0;
}