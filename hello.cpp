#include <iostream>
#include <vector>
#include <string>

#include "./Sales_data.hpp"

using namespace std;

int main()
{
    const int constant = 26;
    const int *const_p = &constant;
    int* modifier = const_cast<int *>(const_p);
    *modifier = 3;

    cout << modifier << endl;
    cout << &constant << endl; 
    cout << *modifier << endl;
    cout << constant << endl;
}
