#include <string>
#include <iostream>

using namespace std;

void presuf(string &s, const string &word, const string &prefix, const string &suffix);

void presuf(string &s, const string &word, const string &prefix, const string &suffix)
{
    size_t i = s.find(word, 0);
    while  (i < s.length())
    {
        s.insert(i, prefix);
        cout << i << endl;
        i += prefix.length() + word.length();
        s.insert(i, suffix);
        i += suffix.length();
        i = s.find(word, i);
    }
}

int main()
{
    std::string str("Holly Moly, Dummy Johnny.");

    presuf(str, "Moly", "Mr. ", " Jr. ");
    presuf(str, "Johnny", "Sir ", " III");

    cout << str << endl;

    return 0;
}
