/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
#include <string>
using namespace std;

// Write Your Function Here
string greeting(string name, string gender = "")
{
    string title = (gender == "Male" ? "Mr " : (gender == "Female" ? "Miss " : ""));
    string message = "Hello " + title + name;

    return message;
}

int main()
{
    cout << greeting("Osama", "Male") << "\n";  // Hello Mr Osama
    cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
    cout << greeting("Sameh") << "\n";          // Hello Sameh
    return 0;
}
