#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // initialize all ptr before use it
    int *int_ptr {};
    double *double_ptr {nullptr};
    char *char_ptr {nullptr};
    string *string_ptr {nullptr};
    
    int num{722};
    cout << "Value of num is: " << num << endl;
    cout << "Size of num is: " << sizeof(num) << endl;
    cout << "Address of num is: " << &num << endl;
    
    int *p;
    cout << "Value of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << "size of p is: " << sizeof(p) <<endl;
    p = nullptr;
    cout << "Value of p is: " << p << endl;
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};
    
    cout << "The value of p1: " << p1 << endl;
    cout << "The address of p1: " << &p1 << endl;
    cout << "The size of p1: " << sizeof(p1) << endl;
    cout << "The value of p2: "<< p2 << endl;
    cout << "The address of p2: " << &p2 << endl;
    cout << "The size of p2: " << sizeof(p2) << endl;
    cout << "The value of p3: " << p3 << endl;
    cout << "The address of p3: " << &p3 << endl;
    cout << "The  size of p3: " << sizeof(p3) << endl;
    cout << "The value of p4: " << p4 << endl;
    cout << "The address of p4: " << &p4 << endl;
    cout << "The size of p4: " << sizeof(p4) << endl;
    cout << "The value of p5: " << p5 << endl;
    cout << "The address of p5: " << &p5 << endl;
    cout << "The size of p5: " << sizeof(p5) << endl;
    
    return 0;
}