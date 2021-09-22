#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void biggies(vector<string> words, vector<string>::size_type sz)
{
    auto part_end = stable_partition(
        words.begin(),
        words.end(),
        [sz](const string &a) -> bool
        { return a.size() <= sz; });

    for (; part_end != words.end(); part_end++)
    {
        cout << *part_end << " ";
    }

    cout << endl;
}

int main()
{
    biggies({"hello", "helo", "elo", "eo", "o"}, 3);
}