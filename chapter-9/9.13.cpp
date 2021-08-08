#include <list>
#include <vector>
#include <iostream>
int main() {
    using std::cout;
    using std::endl;

    std::list<int> list { 1, 2, 3, 4 };
    std::vector<int> vec { 1, 2, 3, 4 };

    std::vector<double> a(list.begin(), list.end());
    std::vector<double> b(vec.begin(), vec.end());

    for (double v : a) {
        cout << v << " ";
    }

    cout << endl;

    for (double v : b) {
        cout << v << " ";
    }

    cout << endl;

    return 0;
}
