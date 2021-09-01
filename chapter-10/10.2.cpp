#include <iostream>
#include <fstream>
#include <algorithm>
#include <list>
#include <string>
#include <iterator>

int main()
{
    std::ifstream ifs("../data.txt");
    std::list<std::string> ls;
    std::string res;

    while (ifs >> res)
    {
        ls.push_back(res);
    }

    const std::string word = "the";
    std::cout << "总共有" << std::count(ls.begin(), ls.end(), word) << "个`the`" << std::endl;

    return 0;
}