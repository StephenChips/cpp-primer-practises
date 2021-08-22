#include <iostream>
#include <list>
#include <deque>
#include <string>

int main()
{
    std::deque<int> odd, even;
    std::list<int> list{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto i : list)
    {
        auto &deque = (i & 1 ? odd : even);
        deque.insert(deque.end(), i);
    }

    for (auto v : odd)
        std::cout << v << " ";

    std::cout << std::endl;

    for (auto v : even)
        std::cout << v << " ";

    std::cout << std::endl;

    return 0;
}
