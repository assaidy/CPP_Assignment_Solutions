#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec{100, 200, 300, 400};

    for (int& i : vec)
        cout << i << '\n';

    vec.push_back(500);

    cout << "First element is: " << vec.front() << '\n';
    cout << "last element is: " << vec.back() << '\n';

    return 0;
}