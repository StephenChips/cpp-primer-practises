#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

vector<string> readLinesFromFile(const char *fname);
vector<string> readWordsFromFile(const char *fname);

vector<string> readLinesFromFile(const char *fname) {
    std::ifstream fs(fname);
    string s;
    vector<string> ret;
    while (getline(fs, s)) {
        ret.push_back(s);
    }

    for (string &s : ret) {
        cout << s << endl;
    }

    return ret;
}

vector<string> readWordsFromFile(const char *fname) {
    std::ifstream fs(fname);
    string s;
    vector<string> vec;

    while (fs >> s) {
        vec.push_back(s);
    }

    for (string &s : vec) {
        cout << s << " ";
    }

    return vec;
}

int main() {
    readLinesFromFile("./8.4.cpp");
    readWordsFromFile("./8.4.cpp");
    return 0;
}