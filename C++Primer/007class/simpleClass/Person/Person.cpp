#include "Person.h"
#include <iostream>

std::ostream &print(std::ostream &os, const Person &p) {
    os << p.name << " lives at " << p.address << std::endl;
    return os;
}

std::istream &read(std::istream &in, Person &p) {
    in >> p.name >> p.address;
    return in;
}

Person::Person(std::string n)
    :name{n} {
        std::cout << "One Parameter" << std::endl;
        
}

Person::Person(std::string n, std::string a)
    :name{n}, address{a} {
        std::cout << "Two parameters" << std::endl;
}

Person::Person(std::istream &in) {
    std::cout << "Read in parameter" << std::endl;
    read(in, *this);
    
}