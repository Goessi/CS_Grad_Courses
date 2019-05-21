#ifndef _BOOK_H_
#define _BOOK_H_
#include <string>
class Book {
private:
    std::string name;
    std::string BookNo;
    int num_sold;
public:
    Book();
    Book(std::string, std::string, int);
    Book(std::string);
    Book(std::string, std::string);
    Book(std::string, int);
};
#endif