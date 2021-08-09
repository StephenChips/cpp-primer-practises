#include <iostream>
#include <deque>
#include <list>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    deque<int> odd, even;

    list<int> numbers;
    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < 10; i++)
    {
        numbers.push_back(rand() % 100);
    }

    for (auto iter = numbers.begin(); iter != numbers.end(); iter++)
    {
        if (*iter & 1)
            odd.push_back(*iter);
        else
            even.push_back(*iter);
    }

    for (auto val : odd)
        cout << val << " ";

    cout << endl;

    for (auto val : even)
        cout << val << " ";

    cout << endl;
}