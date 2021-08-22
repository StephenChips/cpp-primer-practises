#include <string>
#include <iostream>

using namespace std;

void replace(string &s, const string &oldVal, const string &newVal);

void replace(string &s, const string &oldVal, const string &newVal)
{
    for (size_t i = s.find(oldVal, 0); i < s.length(); i = s.find(oldVal, i))
    {
        s.replace(i, oldVal.length(), newVal);
    }
}


int main()
{
    std::string str("We will get there, through here, though is far.");

    replace(str, "through", "thru");
    replace(str, "though", "tho");

    cout << str << endl;

    return 0;
}
