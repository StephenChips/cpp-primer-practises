#include <list>
#include <array>
#include <iostream>

using std::cout;
using std::endl;
using std::swap;

using IntArr = std::array<int, 5>;

void printArr(const IntArr &arr)
{
    for (auto i : arr)
        cout << i << " ";

    cout << endl;
}

void printArrs(const IntArr arrays[], size_t n) {
    for (size_t i = 0; i < n; i++) {
        printArr(arrays[i]);
    }

    cout << endl;
}

int main()
{
    IntArr arrays[] = {
        IntArr{},
        IntArr{1, 2, 3},
        IntArr{1, 2, 3, 4, 5}};

    printArrs(arrays, 3);

    arrays[0].swap(arrays[1]);

    printArrs(arrays, 3);

    swap(arrays[1], arrays[2]);

    printArrs(arrays, 3);

    return 0;
}
