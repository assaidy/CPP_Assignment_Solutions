#include <iostream>
using namespace std;

void print_str_chars(string str)
{
    cout << "== ";

    for (int i = 0; i < str.size(); i++)
    {
        if (i != str.size() - 1)
            cout << str[i] << ", ";
        else
            cout << str[i];
    }

    cout << " =";
}

int main()
{
    // Friends Array
    string friends[] = {"Ahmed", "Osama", "Ameer"};

    // Output Needed
    // =========
    // = Ahmed =
    // ==================
    // == A, h, m, e, d =
    // ==================

    cout << "=========\n";
    cout << "= " << friends[0] << " =\n";
    cout << "==================\n";
    print_str_chars(friends[0]);
    cout << "\n==================\n";

    // =========
    // = Osama =
    // ==================
    // == O, s, a, m, a =
    // ==================

    cout << "=========\n";
    cout << "= " << friends[1] << " =\n";
    cout << "==================\n";
    print_str_chars(friends[1]);
    cout << "\n==================\n";

    // =========
    // = Ameer =
    // ==================
    // == A, m, e, e, r =
    // ==================

    cout << "=========\n";
    cout << "= " << friends[2] << " =\n";
    cout << "==================\n";
    print_str_chars(friends[2]);
    cout << "\n==================\n";

    return 0;
}