#include <algorithm>
#include <vector>
#include <iostream>

template <typename T>
void printVec(const std::vector<T> &vec)
{
    for (auto i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }

    std::cout << std::endl;
}

void elimDups(std::vector<int> &vec)
{
    printVec(vec);

    std::sort(vec.begin(), vec.end());

    auto unique_end = std::unique(vec.begin(), vec.end());

    printVec(vec);

    vec.erase(unique_end, vec.end());
    
    printVec(vec);

}

int main()
{
    std::vector<int> nums = {
        1, 2, 1, 9, 3, 5, 9, 2, 6};
    elimDups(nums);
}