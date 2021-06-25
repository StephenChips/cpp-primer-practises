#include <cstring>
#include <algorithm>

class string {
    private:
    char *data;

    public:
        string(const char *p) {
            size_t size = std::strlen(p) + 1;
            this->data = new char[size];
            std::memcpy(data, p, size);
        }

        ~string() {
            delete[] data;
        }

        string(const string& that) {
            size_t size = std::strlen(that.data) + 1;
            this->data = new char[size];
            std::memcpy(data, that.data, size);
        }
};
