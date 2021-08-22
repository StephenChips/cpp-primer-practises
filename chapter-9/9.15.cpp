#include <vector>
#include <iostream>
#include <algorithm>

bool isVectorEquals(const std::vector<int> &a, const std::vector<int> &b)
{
    return a == b;
}

int main()
{
    std::cout << isVectorEquals({}, {}) << std::endl;

    std::cout << isVectorEquals({1}, {}) << std::endl;
}