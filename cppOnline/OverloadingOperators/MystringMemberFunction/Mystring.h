#ifndef _MYSTRING_H_
#define _MYSTRING_H_
class Mystring {
private:
    char *str;
public:
    Mystring(const char *s);
    Mystring();
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();
    
    void display() const;
    int get_length() const;
    const char *get_str() const;
};
#endif