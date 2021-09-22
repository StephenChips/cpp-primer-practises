# 10.4

There is an error. The return type is determined by the last param, so if the last element is a integer, the result will be an integer, 

# 10.7

Yes, there are errors. The defined container don't have enough room to store new data that are inserted by functions `copy` and `fill_n`. It will become an out-of-range error and thus probably will causes segmentation faults.

# 10.8

Because back_inserter uses `push_back` methods on a container to add elements. The container will check if it should increase spaces to hold element, before actually add it into itself.

# 10.10

Because the algorithms operate on iterators, not containers. Since you cannot create/delete items by iterator, you cannot change the container's size.

# 10.14

```c++
auto sum = [](int a, int b) { return a + b; }
```

# 10.15

```c++
void closure()
{
    int a = 3;
    auto sum = [a](int b){ return a + b }; 

}
```

# 10.21
```c++
void closure()
{
    int a = 10;
    auto dec_until_zero = [&a] {
        if (a > 0) a--;
        return a == 0;
    };
}
```