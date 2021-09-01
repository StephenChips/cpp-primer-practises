#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec;

    std::cout << "总共出现了" << std::count(vec.begin(), vec.end(), 1) << "次" << std::endl;

    return 0;
}