#include <iostream>
#include <list>
#include <string>

int main()
{
    std::list<std::string> strList;
    std::string s;
    while (std::cin >> s)
    {
        strList.insert(strList.end(), s);
    }

    for (auto str : strList)
    {
        std::cout << str << std::endl;
    }

    return 0;
}
