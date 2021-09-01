#include <string>
#include <vector>

using namespace std;

class MyDate
{
private:
    unsigned int year, month, day;

public:
    MyDate(const string &s)
    {
        size_t slash_pos = s.find_first_of("/");

        if (slash_pos != string::npos)
        {
            year = stoi(s.substr(0, slash_pos));

            size_t next_slash_pos = s.find_first_of("/", slash_pos + 1);
            month = stoi(s.substr(slash_pos + 1, next_slash_pos));
            slash_pos = next_slash_pos;

            next_slash_pos = s.find_first_of("/", slash_pos + 1);
            day = stoi(s.substr(slash_pos + 1, next_slash_pos));
            slash_pos = next_slash_pos;
        }
        else
        {
            size_t first_space_pos = s.find_first_of(" ");
            month = translate(s.substr(0, first_space_pos));
            size_t first_colon_pos = s.find_first_of(",", first_space_pos);
            day = stoi(s.substr(first_space_pos, first_colon_pos - first_space_pos))
        }
    }

private:
    unsigned int translate(const string &s)
    {
        vector<string> vocabs{
            "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

        for (size_t i = 0; i < vocabs.size(); i++) {
            if (vocabs[i].find(s) == 0) return i;
        }

        return static_cast<int>(-1);
    }
}