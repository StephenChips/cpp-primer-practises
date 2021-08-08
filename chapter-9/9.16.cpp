#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

int main() {
    std::vector<int> vec{ 1, 2, 3, 4, 5 };
    std::list<int> list{ 1, 2, 3, 4, 5 };

    bool result = std::equal(vec.cbegin(), vec.cend(), list.cbegin(), list.cend());

    std::cout << result << std::endl;
}