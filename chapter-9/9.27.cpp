<<<<<<< HEAD
#include <iostream>
#include <forward_list>
=======
#include <forward_list>
#include <iostream>
#include <iterator>
>>>>>>> f8853916b656477f732d054877d923bbd1e0e7c8

int main()
{
    std::forward_list<int> list{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

<<<<<<< HEAD
    auto it = list.begin();
    auto itBefore = list.before_begin();
    
    while (it != list.end())
    {
        if ((*it & 1) == 1)
        {
            list.erase_after(itBefore);
            it = std::next(itBefore);
        }
        else
        {
            it++;
            itBefore++;
        }
    }

    for (int i : list)
    {
        std::cout << i << " ";
    }
=======
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

>>>>>>> f8853916b656477f732d054877d923bbd1e0e7c8
    std::cout << std::endl;

    return 0;
}