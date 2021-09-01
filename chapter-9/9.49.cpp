#include <iostream>
#include <string>
#include <fstream>

using std::ifstream;
using std::string;
using std::cout;
using std::endl;

int main()
{
    ifstream ifs("../data.txt");
    if (!ifs) {
        cout << "Open file failed!" << endl;
        return -1;
    }

    string word, longest;

    while (ifs >> word)
    {
        if (word.find_first_not_of("acemnorsuvwxz") == string::npos && word.length() > longest.length())
        {
            longest = word;
        }
    }

    cout << longest << endl;

    return 0;
}