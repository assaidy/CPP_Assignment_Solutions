#include <iostream>
using namespace std;

// Write Your Functions Here
float avg(int days[], int len) {
    float sum{};
    for (int i = 0; i < len; i++)
        sum += days[i];

    return sum / len;
}

int main()
{
    int money[] = { 10, 20, 15, 25, 30, 35 };
    int monsize = size(money);
    cout << avg(money, monsize) << "\n"; // 22.5
    return 0;
}