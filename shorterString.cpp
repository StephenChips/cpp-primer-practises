#include <string>
#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

const string &shorterString(const string &a, const string &b);

const string &shorterString(const string &a, const string &b)
{
    return shorterString(
        const_cast<string &>(a),
        const_cast<string &>(b));
}

string &shorterString(string &a, string &b)
{
    return a.length() > b.length() ? b : a;
}

int main()
{
    string a("abcdefg");
    string b("abc");

    for (unsigned int i = 0; i < 100U; i++) {
        shorterString(a, b).push_back('a');
    }

    cout << a << endl << b << endl;
    ;
}