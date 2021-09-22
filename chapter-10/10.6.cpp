#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> vec;
    
    auto it = std::back_inserter(vec);


    std::fill_n(it, 100, 0);
    for (auto i = 0u; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
        if (i % 10 == 0) std::cout << std::endl;
    }

    std::cout << std::endl;

    return 0;
}