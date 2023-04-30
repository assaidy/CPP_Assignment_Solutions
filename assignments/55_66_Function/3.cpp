#include <iostream>
using namespace std;

// Write Your Function Here
float money(float salary, int days, int bonusDays) {
    int holidys = (days / 7) * 2;
    days -= holidys;

    return (salary - bonusDays * 100) / days;
}

int main()
{
    cout << money(1000, 10, 2) << "\n"; // 100

    // Days = 10 And After Removing Holidays = 8 Days
    // 100 Pound Everyday = 800 Pound For 8 Days
    // Other 200 Pounds Is For The Special 2 Days
    // The Total Is 1000

    cout << money(2015, 21, 4) << "\n"; // 107.667
    cout << money(4500, 40, 5) << "\n"; // 133.333
    return 0;
}