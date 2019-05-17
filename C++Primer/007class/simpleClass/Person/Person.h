#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>
#include <iostream>

class Person {
    friend std::ostream &print(std::ostream &os, const Person &p);
    friend std::istream &read(std::istream &in, Person &p);
private:
    std::string name;
    std::string address;
public:
    std::string get_name() const {return name;};
    std::string get_address() const {return address;};
    
    Person() = default;
    Person(std::string n);
    Person(std::string n, std::string address);
    Person(std::istream &);
};
#endif