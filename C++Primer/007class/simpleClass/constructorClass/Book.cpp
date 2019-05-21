#include "Book.h"
#include <iostream>
Book::Book()
    :Book("default name", "default bookno", 0) {
        std::cout << "No parameters" << std::endl;
        std::cout << "================" << std::endl;
    }
    
Book::Book(std::string s1, std::string s2, int num)
    :name{s1}, BookNo{s2}, num_sold{num} {
        std::cout << "Using three parameters constructor" << std::endl;
    }
    
Book::Book(std::string s1)
    :Book(s1, "default bookno", 0) {
        std::cout << "One string parameter" << std::endl;
        std::cout << "================" << std::endl;
    }
Book::Book(std::string s1, std::string s2) 
    :Book(s1, s2, 0) {
        std::cout << "Two string parameters" << std::endl;
        std::cout << "===================" << std::endl;
    }
Book::Book(std::string s1, int n)
    :Book(s1, "default bookno", n) {
        std::cout << "One string parameter, one integer parameter" <<std::endl;
        std::cout  << "========================" << std::endl;
    }