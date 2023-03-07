#include <iostream>
#include "library.h"

using namespace std;

manager supermarket_manager;
user supermarket_user;
vector<product> our_products;

int main_menue()
{
    system("clear");

    cout << "---------- Supermarket --------------\n";
    cout << "Press Enter to open...";
    getchar();

    cout << "-------------------------\n";
    cout << "Chose number from 1 to 3:\n";
    cout << "-------------------------\n";
    cout << "1) Manager\n";
    cout << "2) User\n";
    cout << "3) Exit\n\n";

    int choice;
    cin >> choice;

    if (cin.fail() || choice < 1 || choice > 2)
    {
        cout << "\nThanks For Shopping From Our Market:)\n\n\n";
        return 3;
    }

    return choice;
}

void case_manager()
{
    cout << "============= manager login ==============\n";
    cout << "Enter your username: ";
    string username;
    cin >> username;

    cout << "Enter your password: ";
    string password;
    cin >> password;

    if (!(supermarket_manager.login(username, password)))
    {
        cout << "Wrong Input..\n\n";
        cout << "1) Try again.\n";
        cout << "2) Go back.\n\n";

        int choice;
        cin >> choice;

        if (choice == 1)
            case_manager();
        else
            return;
    }
}

void case_user()
{
    cout << "choise your status:\n";
    cout << "-------------------\n";
    cout << "1) Login\n";
    cout << "2) Signup\n";
    cout << "3) Go Back\n\n";

    int status;
    cin >> status;

    if (status == 1)
    {
    login:
        cout << "============= user login ==============\n";
        cout << "Enter your username: ";
        string username;
        cin >> username;
        cout << "Enter your password: ";
        string password;
        cin >> password;

        if (!(supermarket_user.login(username, password)))
        {
            cout << "Wrong Input..\n\n";
            cout << "1) Try again.\n";
            cout << "2) Go back.\n\n";

            int choice;
            cin >> choice;

            if (choice == 1)
                goto login;
            else
                case_user();
        }
        else
            return;
    }
    else if (status == 2)
    {
        cout << "============= user signup ==============\n";
        cout << "Enter your username: ";
        string username;
        cin >> username;
        cout << "Enter your password: ";
        string password;
        cin >> password;

        supermarket_user.signup(username, password);

        case_user();
    }

    else if (status == 3 || cin.fail())
        return;
}

int user_control()
{
    cout << "press enter to continue...";
    getchar();
    system("clear");

    cout << "============================================\n";
    cout << "hello, user. choose what you want to do:)\n";
    cout << "============================================\n";
    cout << "1) Display menue of product.\n";
    cout << "2) Buy a product.\n";
    cout << "3) Exit.\n\n";

    int choice;
    cin >> choice;

    if (cin.fail())
        return 3;

    cin.ignore();

    return choice;
}

void display_products()
{
    system("clear");
    cout << "=================================\n";
    cout << "Hello there. enjoy your shopping:)\n";
    cout << "=================================\n";

    if (our_products.size() == 0)
    {
        cout << "No products available now.\n\n";
    }

    else
    {
        for (int i = 0; i < our_products.size(); i++)
        {
            if (!(our_products[i].get_quantity() > 0))
            {
                our_products.erase(our_products.begin() + i);
                continue;
            }
            our_products[i].display();
        }
        cout << endl;
    }
}

void buy_product()
{
    cout << "Product name and quantity: ";
    string name;
    int qua;
    cin >> name >> qua;

    for (int i = 0; i < our_products.size(); i++)
    {
        if (name == our_products[i].get_name())
        {
            cout << "Buyed.\n";
            our_products[i].set_quantity(our_products[i].get_quantity() - qua);
        }
    }
}

int manager_control()
{
    cout << "press enter to continue...";
    getchar();
    system("clear");

    cout << "============================================\n";
    cout << "hello, manager. choose what you want to do:)\n";
    cout << "============================================\n";
    cout << "1) Add product.\n";
    cout << "2) Delete product.\n";
    cout << "3) Edit price.\n";
    cout << "4) Exit.\n\n";

    int choice;
    cin >> choice;

    if (cin.fail())
        return 3;

    cin.ignore();

    return choice;
}

void add_product()
{
    cout << "Product name: ";
    string name;
    cin >> name;
    cout << "Product Price: ";
    float price;
    cin >> price;
    cout << "product quantity: ";
    int qua;
    cin >> qua;

    product new_product(name, price, qua);

    our_products.push_back(new_product);

    for (int i = 0; i < our_products.size(); i++)
    {
        if (!(our_products[i].get_quantity() > 0))
        {
            cout << "Quantity must be bigger than 0\n";
            add_product();
        }
    }
}

void delete_product()
{
    cout << "Product name: ";
    string name;
    cin >> name;
    bool available = false;

    for (int i = 0; i < our_products.size(); i++)
    {
        if (our_products[i].get_name() == name)
        {
            our_products.erase(our_products.begin() + i);
            available = true;
            break;
        }
    }

    if (available)
    {
        cout << "Deleted.\n";
    }
    else
    {
        cout << "Can't find this product.\n";
        return;
    }
}

void edit_price()
{
    cout << "Product name and new price: ";
    string name;
    cin >> name;
    bool available = false;

    for (int i = 0; i < our_products.size(); i++)
    {
        if (our_products[i].get_name() == name)
        {
            int new_price;
            cin >> new_price;
            our_products[i].set_price(new_price);
            available = true;
            break;
        }
    }

    if (available)
    {

        cout << "Updated.\n";
    }
    else
    {
        cout << "Can't find this product.\n";
        return;
    }
}

int main()
{
    int choice = -1;

    while (choice == -1)
    {
        int choice = main_menue();

        if (choice == 1)
        {
            case_manager(); // for lognin

        lable_2:
            cout << endl;

            int ch = manager_control();

            if (ch == 1)
            {
                add_product();
                goto lable_2;
            }
            else if (ch == 2)
            {
                delete_product();
                goto lable_2;
            }
            else if (ch == 3)
            {
                edit_price();
                goto lable_2;
            }
            else
                continue;
        }

        // -------------------------------------------------------------
        else if (choice == 2)
        {
            case_user(); // for login & signup

        lable_1:
            cout << endl;

            int ch = user_control();

            if (ch == 1)
            {
                display_products();
                goto lable_1;
            }
            else if (ch == 2)
            {
                display_products();
                cout << endl;
                buy_product();
                goto lable_1;
            }
            else if (ch == 3)
                continue;
        }

        // -------------------------------------------------------------
        else if (choice == 3)
            break;

        choice = -1;
    }

    return 0;
}