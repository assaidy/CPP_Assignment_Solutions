#include <iostream>

using namespace std;

int main()
{
    // Test Case 1
    int age = 18;
    int points = 450;

    // Output
    // "No Age Is Not Ok"
    // "No Points Is Not Ok"

    // Answer
    if (age > 18)
        cout << "Yes Age Is OK\n";
    else
        cout << "No Age Is Not OK\n";

    if (points > 500)
        cout << "Yes Points Is OK\n";
    else
        cout << "No Points Are Not OK\n";

    // Test Case 2
    age = 20;
    points = 450;

    // Output
    // "Yes Age Is Ok"
    // "No Points Is Not Ok"

    // Answer
    cout << ((age > 18) ? "Yes Age Is OK\n" : "No Age Is Not OK\n");
    cout << ((points > 500) ? "Yes Points Are OK\n" : "No Points Are Not OK\n");

    // Test Case 3
    age = 20;
    points = 650;

    // Output
    // "Yes Age Is Ok"
    // "Yes Points Is Ok"

    // Answer
    cout << ((age > 18) ? "Yes Age Is OK\n" : "No Age Is Not OK\n");
    cout << ((points > 500) ? "Yes Points Are OK\n" : "No Points Are Not OK\n");

    return 0;
}