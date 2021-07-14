#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Vec {
    int a = 3;

    Vec() = default;

    Vec(const Vec& v) {
        cout << "Called copy constructor" << endl;
        a = v.a;
    }

    Vec(const Vec&& v) {
        cout << "Called move constructor" << endl;
        a = v.a;
    }
};

Vec f();
Vec f() {
    Vec a;

    a.a = 10000;
    return a;
}


int main() {
    cout <<  f().a << endl;
    return 0;
}