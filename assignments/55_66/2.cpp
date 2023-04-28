#include <iostream>
using namespace std;

// Write Your Function Here
float money(float salary, int days) {
    int holidys = (days / 7) * 2;
    days -= holidys;

    return salary / days;
}

int main()
{
    /*
      Hints
      21 Days Has 3 "Weeks"
      Every "Week" You Have 2 Holidays.
      Total = 3 * 2 = 6 Holidays From 21 Days
    */

    cout << money(2015, 21) << "\n"; // 134.333
    cout << money(4500, 40) << "\n"; // 150
    return 0;
}