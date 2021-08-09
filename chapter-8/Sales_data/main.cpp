#include "./Sales_data.hpp"
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2)
        return 0;

    map<string, Sales_data> m;
    Sales_data total;
    ifstream ifs(argv[1]);

    if (read(ifs, total))
    {
        Sales_data trans;

        while (read(ifs, trans))
        {
            auto result = m.find(trans.isbn());
            if (result != m.end())
                result->second.combine(trans);
            else
                m[trans.isbn()] = trans;
        }

        for (auto &entry : m) {
            print(cout, entry.second) << endl;
        }
    }
    else
    {
        cerr << "No data?!" << endl;
    }

    return 0;
}
