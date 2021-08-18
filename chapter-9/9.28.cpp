#include <iostream>
#include <forward_list>
#include <string>

using std::cout;
using std::endl;
using std::forward_list;
using std::string;

void insert_after(forward_list<string> &list, const string &s1, const string &s2)
{
    auto before_begin = list.cbefore_begin();
    auto end = list.cend();
    while (next(before_begin) != end)
    {
        if (s1 == *next(before_begin))
            break;

        before_begin = next(before_begin);
    }

    if (next(before_begin) != end)
    {
        before_begin++;
    }
    list.insert_after(before_begin, s2);
}

int main()
{
    forward_list<string> list{
        "hello",
        "world",
        "lack"};
    insert_after(list, "world", "hello");
    insert_after(list, "fudge", "sweet");

    for (string &s : list)
    {
        cout << s << " ";
    }

    cout << endl;
}