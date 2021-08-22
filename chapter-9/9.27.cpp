#include <forward_list>
#include <iostream>
#include <iterator>

int main()
{
    std::forward_list<int> list{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto bi = list.before_begin();

    while (std::next(bi) != list.end())
    {
        if (*std::next(bi) & 1 == 1)
        {
            bi = list.erase_after(bi);
        }
        else
        {
            bi++;
        }
    }

    for (auto i : list) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}