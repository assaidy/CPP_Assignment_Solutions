#include <iostream>
using namespace std;

// Write Your Function Here
string greeting(string name, string gender = "\b") { // \b to skip the space after "Hello "
    if (gender == "Male")
        gender = "Mr";
    else if (gender == "Female")
        gender = "Miss";

    return "Hello " + gender + " " + name;
}

int main()
{
    cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
    cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
    cout << greeting("Sameh") << "\n"; // Hello Sameh
    return 0;
}