#include <iostream>

using namespace std;

int main()
{
    int by = 82; // by => Birth Year
    int s = 500; // s => Salary

    cout << ((by > 80) ? ((s < 600) ? "OK\n" : "High\n") : "Not OK\n");

    return 0;
}