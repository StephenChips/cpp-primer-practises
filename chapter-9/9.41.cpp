#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<char> vec = {'h',
                             'e',
                             'l',
                             'l',
                             'o'};

    std::string str(vec.begin(), vec.end());

    std::cout << str << std::endl;

    str.reserve(100);

    str.push_back('c');
    return 0;
}

