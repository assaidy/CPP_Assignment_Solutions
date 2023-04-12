#include <iostream>
using namespace std;

int main()
{
    cout << "from for\n";
    for (int i = 0; i <= 10; i++)
        cout << i << '\n';

    cout << "from while\n";
    int num = 0;
    while (num <= 10)
    {
        cout << num << '\n';
        num++;
    }

    cout << "From do-while\n";
    num = 0;
    do{
        cout << num << '\n';
        num++;
    } while (num <= 10);

    return 0;
}