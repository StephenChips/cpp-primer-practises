#include <string>
#include <vector>

class Screen
{
public:
    typedef std::string::size_type pos;

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    mutable size_t access_ctr; // 即使在一个const对象内业内被修改
    // 其他成员与之前的版本一致

public:
    Screen() = default;
    Screen(pos h, pos w) : height(h), width(w){};
    Screen(pos h, pos w, char ch) : height(h), width(w), contents(1, ch){};
    Screen &set(char c);
    Screen &set(pos h, pos w, char c);
    Screen &move(pos r, pos c);
    char get() const { return contents[cursor]; };
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
    void some_member() const;
};

void Screen::some_member() const
{
    access_ctr++;
}

inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;
    return *this;
}

class Window_mgr
{
private:
    // 这个Window_mgr追踪的Screen
    // 默认情况下，一个Window_mgr包含一个标准尺寸的空白Screen
    std::vector<Screen> screens { Screen(24, 80, ' ') };
};