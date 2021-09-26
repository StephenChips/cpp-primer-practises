#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> nums{80, 3, 92, 66, 26, 26, 61, 11, 1, 52};
    for (vector<int>::const_reverse_iterator i = nums.crbegin(); i != nums.crend(); i++) {
        cout << *i << " " << endl;
    }

    return 0; 
}
