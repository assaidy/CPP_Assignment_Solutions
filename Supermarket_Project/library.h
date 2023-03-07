#pragma once
#include <iostream>
#include <vector>
using namespace std;

class user
{
private:
    string name;
    string password;

public:
    user(string n, string p) : name(n), password(p)
    {
    }

    user()
    {
    }

    void set_name(string n)
    {
        name = n;
    }
    string get_name()
    {
        return name;
    }

    void set_password(string p)
    {
        password = p;
    }
    string get_password()
    {
        return password;
    }

    bool login(string n, string p)
    {
        if (name == n && password == p)
            return true;

        return false;
    }

    void signup(string n, string p)
    {
        name = n;
        password = p;
    }
};

class manager
{
private:
    string name = "ahmad";
    string password = "14253647Aa";

public:
    manager(string n, string p) : name(n), password(p)
    {
    }
    manager()
    {
    }

    void set_name(string n)
    {
        name = n;
    }
    string get_name()
    {
        return name;
    }

    void set_password(string p)
    {
        password = p;
    }
    string get_password()
    {
        return password;
    }

    bool login(string n, string p)
    {
        if (name == n && password == p)
            return true;

        return false;
    }
};

class product
{
private:
    string name;
    float price;
    int quantity;

public:
    product()
    {
    }
    product(string n, float p, int q) : name(n), price(p), quantity(q)
    {
    }

    void set_name(string n)
    {
        name = n;
    }
    string get_name()
    {
        return name;
    }

    void set_price(float p)
    {
        price = p;
    }
    float get_price()
    {
        return price;
    }

    void set_quantity(int q)
    {
        quantity = q;
    }
    int get_quantity()
    {
        return quantity;
    }

    void display()
    {
        cout << "{product name} " << name << " , {price} " << price << " , {quantity} " << quantity << "\n";
    }
};