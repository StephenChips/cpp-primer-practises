#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> list{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

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
    std::cout << std::endl;

    return 0;
}