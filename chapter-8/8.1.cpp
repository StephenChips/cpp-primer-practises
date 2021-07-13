#include <iostream>
#include <string>

std::istream& readStreamAll(std::istream&);

std::istream& readStreamAll(std::istream& is) {
    std::string ret;
    char ch;
    while (is >> ch) {
        ret.push_back(ch);
    }

    std::cout << ret << std::endl;

    is.clear();
    return is;
}

int main() {
    readStreamAll(std::cin);
}