#include <string>
#include <iostream>

using namespace std;

int main()
{
    string name("AnnaBelle");
    string numbers("0123456789");

    cout << numbers.find(name) << endl;
    cout << numbers.find("45") << endl;

    return 0;
}