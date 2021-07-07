#include <string>
#include <iostream>

/**
 * 对应练习7.4 7.5
 * 
 */
class Person
{
    std::string name, address;

public:
    Person() = default;
    explicit Person(std::string name, std::string address) : name(name), address(address){};

    std::string getName() const { return name; };
    std::string getAddress() const { return address; };

    friend std::ostream &print(std::ostream &os, const Person &person);
    friend std::istream &read(std::istream &is, Person &person);
};

std::ostream &print(std::ostream &os, const Person &person);
std::istream &read(std::istream &is, Person &person);

std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.address << " " << person.name << std::endl;
    return os;
}

std::istream &read(std::istream &is, Person &person)
{
    is >> person.address >> person.name;
    return is;
}

int main()
{
    Person ba("ba", "adce");
    std::cout << ba.getAddress() << " " << ba.getName() << std::endl;


    return 0;
}
