#include <iostream>
using namespace std;

int main()
{
    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

    // Output Needed
    // "Ahmed"
    // "Ashraf"
    // "Amany"

    cout << "From for loop\n";
    for (int i = 0; i < size(friends); i++)
        if (friends[i][0] == 'A')
            cout << friends[i] << '\n';

    cout << "From while loop\n";
    int i = 0;
    while (i < size(friends))
    {
        if (friends[i][0] == 'A')
            cout << friends[i] << '\n';

        i++;
    }

    return 0;
}