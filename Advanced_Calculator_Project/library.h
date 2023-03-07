#include <iostream>
#include <cmath>

using namespace std;

// -----------------  main menue  -------------------
int main_menue()
{
    system("clear");

    cout << "\n===========================================\n";
    cout << "select the operation you want (from 1 to 11):\n\n";
    cout << " 1) addition\n";
    cout << " 2) subtraction\n";
    cout << " 3) multiplication\n";
    cout << " 4) division\n";
    cout << " 5) squaring\n";
    cout << " 6) square root\n";
    cout << " 7) even or odd\n";
    cout << " 8) power\n";
    cout << " 9) table of items\n";
    cout << "10) determinant\n";
    cout << "11) exit\n";

    int choice;
    cin >> choice;
    return choice;
}

// -----------------   addition   -------------------
void addition()
{
    cout << "\n=======================================\n";
    cout << "How many operatioins? ";

    int result = 0;

    int num_of_oper;

    cin >> num_of_oper;

    int arr[num_of_oper];

    cout << endl;

    for (int i = 1; i <= num_of_oper; i++)
    {
        int num;

        if (i == 1)
            cout << "Enter the " << i << "st number: ";
        else if (i == 2)
            cout << "Enter the " << i << "nd number: ";
        else if (i == 3)
            cout << "Enter the " << i << "rd number: ";
        else
            cout << "Enter the " << i << "th number: ";

        cin >> arr[i - 1];

        result += arr[i - 1];
    }

    cout << "\n";

    for (int i = 0; i < num_of_oper; i++)
    {
        cout << arr[i];

        if (i == num_of_oper - 1)
            cout << " = ";
        else
            cout << " + ";
    }

    cout << result << "\n";

    cout << "=======================================\n";
}

// -----------------   subtraction   -------------------
void subtraction()
{
    cout << "\n=======================================\n";
    cout << "How many operations? ";

    int result = 0;

    int num_of_oper;

    cin >> num_of_oper;

    int arr[num_of_oper];

    cout << endl;

    for (int i = 1; i <= num_of_oper; i++)
    {
        if (i == 1)
            cout << "Enter the " << i << "st number: ";
        else if (i == 2)
            cout << "Enter the " << i << "nd number: ";
        else if (i == 3)
            cout << "Enter the " << i << "rd number: ";
        else
            cout << "Enter the " << i << "th number: ";

        cin >> arr[i - 1];

        if (i == 1)
            result = arr[i - 1];
        else
            result -= arr[i - 1];
    }

    cout << "\n";

    for (int i = 0; i < num_of_oper; i++)
    {
        cout << arr[i];

        if (i == num_of_oper - 1)
            cout << " = ";
        else
            cout << " - ";
    }

    cout << result << "\n";

    cout << "=======================================\n";
}

// ---------------- multiplication ------------------
void multiplication()
{
    cout << "\n=======================================\n";
    cout << "How many operations? ";

    int result = 1;

    int num_of_oper;

    cin >> num_of_oper;

    int arr[num_of_oper];

    cout << endl;

    for (int i = 1; i <= num_of_oper; i++)
    {
        if (i == 1)
            cout << "Enter the " << i << "st number: ";
        else if (i == 2)
            cout << "Enter the " << i << "nd number: ";
        else if (i == 3)
            cout << "Enter the " << i << "rd number: ";
        else
            cout << "Enter the " << i << "th number: ";

        cin >> arr[i - 1];

        result *= arr[i - 1];
    }

    cout << "\n";

    for (int i = 0; i < num_of_oper; i++)
    {
        cout << arr[i];

        if (i == num_of_oper - 1)
            cout << " = ";
        else
            cout << " x ";
    }

    cout << result << "\n";

    cout << "=======================================\n";
}

// ------------------  division  --------------------
void division()
{
    cout << "\n=======================================\n";
    cout << "How many operations? ";

    double result;

    int num_of_oper;

    cin >> num_of_oper;

    double arr[num_of_oper];

    cout << endl;

    for (int i = 1; i <= num_of_oper; i++)
    {
        if (i == 1)
            cout << "Enter the " << i << "st number: ";
        else if (i == 2)
            cout << "Enter the " << i << "nd number: ";
        else if (i == 3)
            cout << "Enter the " << i << "rd number: ";
        else
            cout << "Enter the " << i << "th number: ";

        cin >> arr[i - 1];

        if (i == 1)
            result = arr[i - 1];
        else
            result /= arr[i - 1];
    }

    cout << "\n";

    for (int i = 0; i < num_of_oper; i++)
    {
        cout << arr[i];

        if (i == num_of_oper - 1)
            cout << " = ";
        else
            cout << " ÷ ";
    }

    cout << result << "\n";

    cout << "=======================================\n";
}

// -----------------   Squaring   -------------------
void squaring()
{
    cout << "\n=======================================\n";
    cout << "Enter a number: ";

    int num;

    cin >> num;

    cout << "\n";

    cout << num << " ^ 2 = " << pow(num, 2) << "\n";

    cout << "=======================================\n";
}

// ----------------- Square root --------------------
void square_root()
{
    cout << "\n=======================================\n";
    cout << "Enter a number: ";

    double num;

    cin >> num;

    cout << "\n√" << num << " = " << sqrt(num) << "\n";

    cout << "=======================================\n";
}

// ---------------- even or odd --------------------
void even_or_odd()
{
    cout << "\n=======================================\n";
    cout << "Enter a number: ";

    int num;

    cin >> num;

    cout << "\n";

    if (num % 2 == 0)
        cout << num << " is even.\n";
    else
        cout << num << " is odd.\n";

    cout << "=======================================\n";
}

// ----------------- Power --------------------------
void power()
{
    cout << "\n=======================================\n";
    cout << "Enter the base: ";

    int base;

    cin >> base;

    cout << "Enter the power: ";

    int power;

    cin >> power;

    cout << "\n";

    cout << base << " ^ " << power << " = " << pow(base, power) << "\n";

    cout << "=======================================\n";
}

// ----------------- table_of_content ---------------
void table_of_content()
{
    cout << "\n=======================================\n";

    while (true)
    {
        cout << "Table of Content:\n";
        cout << "=================\n";
        cout << "1- New Table\n";
        cout << "2- Exit\n";

        int choice;
        cin >> choice;

        if (choice != 1)
            return;

        cout << "\nHow many Lines?? ";

        int num_of_lines;
        cin >> num_of_lines;

        string arr[num_of_lines];

        for (int i = 1; i <= num_of_lines; i++)
        {
            cout << i << "- ";
            getline(cin >> ws, arr[i - 1]);
        }

        cout << "\nYour Table of Content:\n";

        for (int i = 1; i <= num_of_lines; i++)
        {
            cout << i << "- " << arr[i - 1] << "\n";
        }

        cout << "\n=======================================\n";
    }
}

// -----------------  determinant  ------------------
void determinant()
{
    cout << "\n=======================================\n";

    while (true)
    {
        cout << "New Determinant:\n";
        cout << "================\n";
        cout << "1- 2x2\n";
        cout << "2- 3x3\n";
        cout << "3- Exit\n";

        int choice;
        cin >> choice;

        if (choice == 3)
            return;

        else if (choice == 1)
        {
            float arr[2][2];

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                    cin >> arr[i][j];
            }

            cout << "\nDeterminant = " << arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0] << "\n";
        }

        else if (choice == 2)
        {
            float arr[3][3];

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                    cin >> arr[i][j];
            } // 00x11 - 01x10

            cout << "\nDeterminant = "
                 << arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]) - arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]) + arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]) << "\n";
        }

        cout << "\n=======================================\n";
    }
}

// -----------------  Our Program  ------------------
void advaced_calculator()
{
    int choice = -1;

    while (choice == -1)
    {
        choice = main_menue();

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            squaring();
            break;
        case 6:
            square_root();
            break;
        case 7:
            even_or_odd();
            break;
        case 8:
            power();
            break;
        case 9:
            table_of_content();
            break;
        case 10:
            determinant();
            break;
        case 11:
            return;
        }

        cout << "Do you want to make another operation [Y|N]? ";

        char press;

        cin >> press;

        if (press == 'n' || press == 'N')
            break;

        choice = -1;
    }
}