#include <numeric>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    std::vector<double> vecDbl {1.0, 2.0, 3.56};

    std::cout << "sum = " << std::accumulate(vec.cbegin(), vec.cend(), 0) << std::endl;
    
    std::cout << "sum = " << std::accumulate(vecDbl.cbegin(), vecDbl.cend(), 0) << std::endl;

    return 0;
}