#include <fstream>
#include <iterator>

using namespace std;

int main()
{
    ifstream ifs("../data/numbers.txt");
    ofstream ofs_even("../data/10.33.evens.txt");
    ofstream ofs_odd("../data/10.33.odds.txt");

    istream_iterator<int> iter(ifs), eof;
    ostream_iterator<int> even_iter(ofs_even, " ");
    ostream_iterator<int> odd_iter(ofs_odd, " ");

    while (iter != eof)
    {
        (*iter & 1 ? *odd_iter : *even_iter) = *iter;
        iter++;
    }

    ofs_even << endl;
    ofs_odd << endl;

    return 0;
}