#include <string>
#include <iostream>
#include <limits>
#include <map>

using namespace std;

int main() {
    string s;
    constexpr int L = 'z' - 'A' + 1;
    int cnts[L] = { 0 };
    while (cin >> s) {
        for (const char &ch : s) {
            cnts[ch - 'A']++;
        }
    }

    for (char i = 0; i < L; i++) {
        cout << "count('" << char('A' + i) << "') = " << cnts[i] << endl;
    }

    return 0;
}