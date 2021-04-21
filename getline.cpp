#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        if (s.size() > 20)
            cout << s << endl;
        else if (s.empty())
            cout << '-' << endl;
    }
}