#ifndef _MYSTRING_H_
#define _MYSTRING_H_
class Mystring {
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source); //copy constructor
    Mystring(Mystring &&source);  //move constructor
    ~Mystring();
    
    void display() const;
    int get_length() const;
    const char *get_str() const;
    
    //overload
    Mystring &operator= (const Mystring &rhs); // copy assignment
    Mystring &operator= (Mystring &&rhs); // move assignment
    
    Mystring operator-() const; // operator- make lowercase
    bool operator==(const Mystring &rhs) const;
    Mystring operator+(const Mystring &rhs) const;
};

#endif