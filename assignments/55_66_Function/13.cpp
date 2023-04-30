#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string protocol, string name, string domain, bool www = true) {
    if (www)
        return protocol + "://" + "www." + name + "." + domain;
    else
        return protocol + "://" + name + "." + domain;
}

int main()
{
    cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
    cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
    cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
    return 0;
}