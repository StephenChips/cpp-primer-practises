#include <string>
#include <iostream>

using namespace std;

int main()
{
    const string str("ab2c3d7R4E6");

    const char *letters = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    const char *digits = "1234567890";

    for (size_t i = str.find_first_not_of(digits, 0); i < str.size(); i = str.find_first_not_of(digits, i + 1))
    {
        cout << str.at(i);
    };

    cout << endl;

    for (size_t i = str.find_first_not_of(letters, 0); i < str.size(); i = str.find_first_not_of(letters, i + 1))
    {
        cout << str.at(i);
    };

    cout << endl;
    return 0;
}