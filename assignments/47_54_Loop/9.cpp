#include <iostream>
using namespace std;

int main()
{
    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

    // Output Needed
    // "Mohamed"
    // "Sayed"

    cout << "From for loop\n";
    for (int i = 1; i <= 2; i++)
        cout << friends[i] << '\n';

    cout << "From while loop\n";
    int i = 1;
    while (i <= 2)
    {
        cout << friends[i] << '\n';

        i++;
    }

    return 0;
}