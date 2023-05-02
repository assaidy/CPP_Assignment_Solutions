#include <iostream>
#include <vector> 
using namespace std;

int main() {
    vector<int> numbers = { 10, 20, 30, 40 };

    // print firts element
    cout << numbers.front() << '\n';
    cout << numbers.at(0) << '\n';
    cout << numbers[0] << '\n';
    cout << *(numbers.begin()) << '\n';

    // print last element
    cout << numbers.back() << '\n';
    cout << numbers.at(3) << '\n';
    cout << numbers[3] << '\n';
    cout << *(numbers.end() - 1) << '\n';

    return 0;
}