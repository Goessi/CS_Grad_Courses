#include <iostream>
#include "Mystring.h"
#include <vector>
using namespace std;

int main() {
    Mystring empty;
    Mystring larry("Larry");
    Mystring stooge {larry};
    
    empty.display();
    larry.display();
    stooge.display();
    
    Mystring a{"Hello"};
    Mystring b;
    b = a;
    
    b.display();
    
    b = "This is a test";
    b.display();
    
    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");
    
    for(const Mystring &s:stooges_vec)
        s.display();
    
    for(Mystring &s: stooges_vec)
        s = "Changed";
        
    for(const Mystring &s: stooges_vec)
        s.display();
        
    return 0;
}
