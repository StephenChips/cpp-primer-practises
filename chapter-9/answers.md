# Chapter 9: Sequential Containers

## 9.9

`cbegin()` is a constant memeber that returns container's `constant_iterator` type.
`begin()` is a non-constant member that returns container's `iterator` type.

## 9.10

```C++
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2 = v2.begin();
auto it3 = v1.cbegin(), it4 = v2.cbegin();
```

`v1` is a `vector<int>`
`v2` is a `const vector<int>`
`it1` and `it2` are both `vector<int>::iterator`
`it3` and `it4` are both `vector<int>::const_iterator`

## 9.11
Six ways to create and initialize a vector

```C++
vector<int> vec1;
vector<int> vec2 { 1, 2, 3 };
vector<int> vec3(vec2);
vector<int> vec4(vec2.cbegin(), vec2.cend());
vector<int> vec5(3);
vector<int> vec6(3, 3);
```

## 9.12

Difference between constructor takes another same container and takes two iterators.

The first one only can accept same container and another one has no limit to the container type, as long as it provides sequential iterators.

## 9.13

Use iterator constructor.

## 9.17

The book has said it clearly:

> All the containers **except** the *unordered associative containers* also support the relational operators (>, >=, <, <=). The right- and left
> oprand must be the same kind of container and must hold elements of the same type.

So, the answer hereby is:

1. `c1` and `c2` should have same type.
2. `c1` and `c2` should have elements of same type.
3. `c1` and `c2` should not be unordered associated containers
4. `c1` and `c2` should support relational operators.

You can say all sequential container satisfy the constrains.

## 9.21

Nothing will go wrong, just the performance may decrease.

## 9.22

1. The iterator `iter` doesn't go forth, causing an infinite loop.
2. The iterator `mid` invalidates after element is inserted into the list.

Fixed version:

```C++
vector<int>::iterator iter = iv.begin();

auto mid = [&]() { return iv.begin() + iv.size() / 2; }
while (iter != mid())
{
    if (*iter == some_val)
    {
        iter = iv.insert(iter, 2 * some_val);
        iter += 2; // be careful it have to advance by two to skip the newly inserted item.
    }
}
```

## 9.23

Nothing will be removed.

# 9.25

If `elem1` equals to `elem2`, or `elem1` and `elem2` are both *off-the-end* iterator, none of items in the container will be removed.

If `elem2` is the *off-the-end* iterator, and `elem1` is not, all items after `elem1` (includes one `elem1` points to) will be removed.

### 9.29

The vector will expands to have 100 elements, then delete 90 elements from rare, leaving only 10 elements.

## 9.30

If the container holds elements of a class type and `resize` adds elements, we must supply an initializer or the element
type must have a default constructor.


## 9.42

Use the member function `reserve` to allocation enough space in advance.

## 9.48

It will return `string::npos`.


## 9.50

**Note:** The string to convert should start with digits.