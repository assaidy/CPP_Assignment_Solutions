#include <iostream>
using namespace std;

int main()
{
    string fName = "Elzero ";
    string mName = "Web ";
    string lName = "School";

    // Output Needed
    cout << fName + mName + lName << '\n';             // Elzero Web School
    cout << fName << mName << lName << '\n';           // Elzero Web School
    cout << fName.append(mName).append(lName) << '\n'; // Elzero Web School

    return 0;
}