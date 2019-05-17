#include "Person.h"
#include <iostream>

int main() {
//    Person p;
//    std::cout << "Please input the person name and address, seperate by space: ";
//    read(std::cin, p);
//    print(std::cout, p);
//    
//    std::cout << p.get_address()<< std::endl;
//    std::cout << p.get_name() << std::endl;
    
    Person p1;
    Person p2("Jing");
    Person p3("Jing", "Park");
    Person p4(std::cin);
    
    return 0;
}
