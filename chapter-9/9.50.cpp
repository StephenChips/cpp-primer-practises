#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> svec { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" };

    int sum(0);

    for (std::vector<std::string>::const_iterator it = svec.begin(); it < svec.end(); it++) {
        sum += std::stoi(*it);
    }

    std::cout << sum << std::endl;

    std::cout << std::stoi("     134fsa") << std::endl;
}
