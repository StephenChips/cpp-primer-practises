#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    ifstream ifs("../data/numbers.txt");
    istream_iterator<int> iter(ifs), iter_eof;
    vector<int> result;

    copy(iter, iter_eof, back_inserter(result));
    sort(result.begin(), result.end());

    unique_copy(result.cbegin(), result.cend(), ostream_iterator<int>(cout, " "));

    cout << endl;

    return 0;
}