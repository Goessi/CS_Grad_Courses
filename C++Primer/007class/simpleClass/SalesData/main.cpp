#include "SalesData.h"
#include <iostream>

int main() {
    Salesdata haha1;
    Salesdata haha2;
    
    std::cout << " please enter three attributes of a Salesdata item: " << std::endl;
    read(std::cin, haha1);
    print(std::cout, haha1);    
    std::cout << "Average price of item: " << haha1.avg_price() << std::endl;
    std::cout << "ISBN of the item: " << haha1.isbn() << std::endl;
    
    std::cout << " please enter three attributes of a Salesdata item: " << std::endl;
    read(std::cin, haha2);
    print(std::cout, haha2);        
    std::cout << "Average price of item: " << haha2.avg_price() << std::endl;
    std::cout << "ISBN of the item: "<< haha2.isbn() << std::endl;

    Salesdata haha3 = haha1.combine(haha2);
    print(std::cout, haha3);
    std::cout << "Average price of item: " << haha3.avg_price() << std::endl;
    std::cout << "ISBN of the item: "<< haha3.isbn() << std::endl;
    return 0;
}