#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <functional>

using namespace std;

using namespace placeholders;

bool length_gt(int size, string &s) {
    return s.size() > size;
}

int main()
{
    vector<string> words{
        "hello",
        "dollar",
        "world",
        "pollar",
        "hello",
        "alfa",
        "vie"};

    auto part_end = partition(words.begin(), words.end(), bind(length_gt, 5, _1));

    for (auto it = words.cbegin(); it != part_end; it++) {
        cout << *it << endl;
    }

    return 0;
}