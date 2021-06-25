#include "./Sales_data.hpp"

struct Record
{
    int a;
    Record(int a) {
        this->a = a;
    }

    int getSomething() {
        return a;
    }
};