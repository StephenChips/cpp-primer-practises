#include <iostream>
#include <deque>
#include <string>

int main()
{
    std::deque<std::string> strDeque;
    std::string s;
    while (std::cin >> s)
    {
        strDeque.insert(strDeque.end(), s);
    }

    for (auto str : strDeque)
    {
        std::cout << str << std::endl;
    }

    return 0;
}
