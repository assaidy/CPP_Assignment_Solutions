#include <iostream>
using namespace std;

int main()
{
    int num1{0};
    int num2{0};

    cout << "First Number: ";
    cin >> num1;
    cout << "Second Number: ";
    cin >> num2;

    if (num1 > num2)
    {
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    for (int i = num1 + 1; i < num2; i++)
        if (i % 2 != 0)
            cout << i << ' ';

    return 0;
}