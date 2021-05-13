#include <iostream>

unsigned long fact(const int a) {
    int i = 1;
    unsigned long result = 1;
    while (i <= a) {
        result *= i;
        i++;
    }
    return result;
}

template<class T>
void swap (T &a, T &b) {
    T c = a;
    a = b;
    b = c;
}

int main() {
    int i;

    std::cout << "Please enter a number:";
    std::cin >> i;

    std::cout << fact(i) << std::endl;

    int a, b;
    a = 3;
    b = 4;

    swap(a, b);

    std::cout << a << b << std::endl;
    return 0;
}