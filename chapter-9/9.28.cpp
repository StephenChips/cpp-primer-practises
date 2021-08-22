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
}

int main()
{
    std::forward_list<std::string> list{};

    find_and_insert(list, "graduate", "school");
    find_and_insert(list, "school", "graduate");
    find_and_insert(list, "student", "student");

    for (std::string &str : list)
    {
        std::cout << str << std::endl;
    }
}