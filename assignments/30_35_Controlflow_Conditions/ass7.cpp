#include <iostream>

using namespace std;

int main()
{
    int result = 0;
    int num1, num2, num3, num4;
    cout << "Please Type 4 Numbers In A Row\n";
    cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 % 2 == 0 && num1 < 20)
        result += num1;
    if (num2 % 2 == 0 && num2 < 20)
        result += num2;
    if (num3 % 2 == 0 && num3 < 20)
        result += num3;
    if (num4 % 2 == 0 && num4 < 20)
        result += num4;

    cout << result << '\n';

    return 0;
}