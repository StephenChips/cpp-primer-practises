#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifs("../data.txt");
    vector<string> words;
    string s;

    while (ifs >> s)
    {
        words.push_back(s);
    }

    cout << "number of words: " << words.size() << endl;

    cout << "words that length gt than 6: " << count_if(words.cbegin(), words.cend(), [](const string &s) -> bool
                                                        { return s.size() >= 6; })
         << endl;

    return 0;
}