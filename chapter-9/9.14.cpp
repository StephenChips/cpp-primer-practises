#include <iostream>
#include <string>
#include <list>
#include <vector>

int main() {
    std::list<const char *> s = {
        "hello",
        ", ",
        "world"
    };

    std::vector<std::string> vec = { std::string("this is bad.") };

    for (auto i : vec) {
        std::cout << i << std::endl;
    }

    vec.assign(s.cbegin(), s.cend());

    for (auto i : vec) {
        std::cout << i << std::endl;
    }
    return 0;
}