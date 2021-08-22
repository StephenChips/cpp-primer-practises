#include <iostream>
#include <list>
#include <vector>
#include <iterator>

template <typename Iter>
void print(Iter begin, Iter end) {
    for (auto i = begin; i != end; i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

    std::vector<int> vec(ia, ia + 11);
    std::list<int> list(ia, ia + 11);

    for (auto it = vec.begin(); it != vec.end();) {
        if ((*it & 1) == 0) {
            it = vec.erase(it);
        }else it++;
    }

    for (auto it = list.begin(); it != list.end();) {
        if ((*it & 1) == 1) it = list.erase(it);
        else it++;
    }

    print(vec.begin(), vec.end());
    print(list.begin(), list.end());
}