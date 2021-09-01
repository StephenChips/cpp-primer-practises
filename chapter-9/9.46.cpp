#include <string>
#include <iostream>

using namespace std;

string add_prefix_and_suffix(const string &name, const string &prefix, const string &suffix);

string add_prefix_and_suffix(const string &name, const string &prefix, const string &suffix)
{
    return string(name.begin(), name.end())
        .insert(0, prefix)
        .append(suffix);
}

int main()
{
    std::string str("Holy Moly");

    cout << add_prefix_and_suffix(str, "Mr. ", " Jr. ") << endl;

    return 0;
}
