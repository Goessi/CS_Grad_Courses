#include "Mystring.h"
#include <cstring>
#include <iostream>

Mystring::Mystring() 
    :str{nullptr}{
    str = new char[1];
    *str = '\0';
    
}

Mystring::Mystring(const char *s) 
    :str{nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        }
        else {
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }    
}

Mystring::Mystring(const Mystring &source) 
    :str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str, source.str);    
}

Mystring::Mystring(Mystring &&source)
    :str(source.str) {
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
    }

Mystring::~Mystring() {
    delete [] str;
}

void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

int Mystring::get_length() const {
    return std::strlen(str);
}

const char *Mystring::get_str() const {
    return str;
}

Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Copy assignment" << std::endl;
    
    if (this == &rhs)
        return *this;
        
    delete [] str; //avoid memory leak
    
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);
    
    return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs) {
    if (this == &rhs)  // self assignment
        return *this;     // return current object
        
    delete [] str;    // deallocate current storage
    str = rhs.str;    // steal the pointer
    
    rhs.str = nullptr;  // null out the rhs object
    
    return *this;  // return current object 
}

Mystring Mystring::operator -() const {
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i=0; i < std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
        Mystring temp {buff};
        delete [] buff;
        return temp;
}

bool Mystring::operator==(const Mystring &rhs) const {
    if (std::strcmp(str, rhs.str) == 0)
        return true;
    else
        return false;
}

Mystring Mystring::operator+ (const Mystring &rhs) const {
    size_t buff_size = std::strlen(str) + std::strlen(rhs.str) + 1;
    char *buff = new char[buff_size];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}