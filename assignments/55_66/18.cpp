#include <iostream>
using namespace std;

// Write Your Function Here
float pricing(int totalPhones, int totalUsed, int unitPrice, float tax) {
    float income = totalPhones * unitPrice; // total price without discounting used phones 
    income -= totalUsed * 200; // discount used phones
    income -= income * (tax / 100); // discounting taxes

    return income;
}

int main()
{
    cout << pricing(50, 10, 800, 20) << "\n"; // 30400
    return 0;
}