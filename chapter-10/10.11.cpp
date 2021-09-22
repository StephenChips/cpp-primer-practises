#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    vector<string> vec{
        "hello",
        "dollar",
        "world",
        "pollar",
        "hello",
        "alfa",
        "vie"};

    stable_sort(vec.begin(), vec.end(), [](auto a, auto b)
                { return a.size() > b.size(); });

    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    for (string &s : vec)
        cout << s << endl;

    return 0;
}