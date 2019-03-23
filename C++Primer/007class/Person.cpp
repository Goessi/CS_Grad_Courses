#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    string address;
public:
    string get_name() const
    {
        return name;
    }

    string get_address() const
    {
        return address;
    }

    istream &read(istream &is, Person &p)
    {
        is >> p.name >> p.address;
        return is;
    }

    ostream &print(ostream &os, const Person &p)
    {
        os << p.name << p.address;
        return os;
    }

    Person() = default;
    Person(const std::string &s): name(s) {}
    Person(const std::string &s, std::string &a): name(s), address(a) {}
    Person(std::istream &is) { is >> *this; }
};
