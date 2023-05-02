#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> firstnumbers = { 10, 30, 50, 70 };
    vector<int> secondnumbers = { 20, 40, 60, 80 };

    vector<int> allNums(size(firstnumbers) + size(secondnumbers));

    // The merge function takes two sorted ranges as input and merges them into a single sorted range
    merge(firstnumbers.begin(), firstnumbers.end(), secondnumbers.begin(), secondnumbers.end(), allNums.begin());

    // We should merge by .insert() if the two vectors were not sorted

    for (int& i : allNums)
        cout << i << '\n';

    return 0;
}

// Output Needed
// 10
// 20
// 30
// 40
// 50
// 60
// 70
// 80