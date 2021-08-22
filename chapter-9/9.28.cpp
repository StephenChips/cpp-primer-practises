<<<<<<< HEAD
#include <string>
#include <forward_list>
#include <iostream>

void find_and_insert(std::forward_list<std::string> &list, const std::string &target, const std::string &newWord);

void find_and_insert(std::forward_list<std::string> &list, const std::string &target, const std::string &newWord)
{
    auto iter_prev = list.before_begin();
    auto iter = list.begin();

    if (iter == list.end())
    {
        list.insert_after(iter_prev, newWord);
        return;
    }

    while (iter != list.end())
    {
        if (*iter == target)
        {
            list.insert_after(iter, newWord);
            return;
        }
        iter_prev++;
        iter++;
    }

    list.insert_after(iter_prev, newWord);
=======
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
>>>>>>> f8853916b656477f732d054877d923bbd1e0e7c8
}

int main()
{
<<<<<<< HEAD
    std::forward_list<std::string> list{};

    find_and_insert(list, "graduate", "school");
    find_and_insert(list, "school", "graduate");
    find_and_insert(list, "student", "student");

    for (std::string &str : list)
    {
        std::cout << str << std::endl;
    }
=======
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
>>>>>>> f8853916b656477f732d054877d923bbd1e0e7c8
}