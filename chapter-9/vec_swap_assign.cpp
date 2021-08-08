#include <vector>
#include <iostream>
#include <list>
#include <iterator>

using std::cout;
using std::endl;
using std::swap;
using std::prev;
using std::next;

using IntVec = std::vector<int>;

void printArr(const IntVec &arr)
{
    for (auto i : arr)
        cout << i << " ";

    cout << endl;
}

void printArrs(const IntVec arrays[], size_t n) {
    for (size_t i = 0; i < n; i++) {
        printArr(arrays[i]);
    }

    cout << endl;
}

int main()
{
    IntVec vecs[] = {
        IntVec{},
        IntVec{1, 2, 3},
        IntVec{1, 2, 3, 4, 5}};

    std::list<int> list = { 100, 239, 341, 412, 132 };

    printArrs(vecs, 3);

    vecs[0].swap(vecs[1]);
    printArrs(vecs, 3);

    swap(vecs[1], vecs[2]);
    printArrs(vecs, 3);

    vecs[2].assign(std::prev(vecs[1].cend(), 2), vecs[1].cend());
    printArrs(vecs, 3);

    vecs[1].assign(next(list.begin(), 1), prev(list.end(), 1));
    printArrs(vecs, 3);

    return 0;
}
