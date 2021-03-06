#include "./Sales_data.hpp"
#include <iostream>

using namespace std;

int main() {
    Sales_data total;

    if (read(cin, total)) {
        Sales_data trans;

        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }
    } else {
        cerr << "No data?!" << endl;
    }

    total.combine(std::string("aaa"));

    return 0;
}
