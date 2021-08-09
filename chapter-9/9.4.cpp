#include <vector>
#include <iostream>

using namespace std;

bool hasVal(vector<int>::const_iterator, vector<int>::const_iterator, int);

vector<int>::const_iterator getVal(vector<int>::const_iterator, vector<int>::const_iterator, int);

bool hasVal(vector<int>::const_iterator begin, vector<int>::const_iterator end, int val)
{
    for (; begin != end; begin++) {
        if (*begin == val) return true; 
    }
    return false;
}

vector<int>::const_iterator getVal(vector<int>::const_iterator begin, vector<int>::const_iterator end, int val)
{
    for (; begin != end; begin++) {
        if (*begin == val) break; 
    }
    return begin;
}


int main() {
    vector<int> a { 1, 3, 4 };

    cout << (hasVal(a.begin(), a.end(), 1) ? "true" : "false") << endl;
    cout << *getVal(a.begin(), a.end(), 1) << endl;
    return 0;
}