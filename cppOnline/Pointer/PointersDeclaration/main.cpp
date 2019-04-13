#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
//     // initialize all ptr before use it
//    int *int_ptr {};
//    double *double_ptr {nullptr};
//    char *char_ptr {nullptr};
//    string *string_ptr {nullptr};
//    
//    int num{722};
//    cout << "Value of num is: " << num << endl;
//    cout << "Size of num is: " << sizeof(num) << endl;
//    cout << "Address of num is: " << &num << endl;
//    
//    int *p;
//    cout << "Value of p is: " << p << endl;
//    cout << "Address of p is: " << &p << endl;
//    cout << "size of p is: " << sizeof(p) <<endl;
//    p = nullptr;
//    cout << "Value of p is: " << p << endl;
//    
//    int aa = 5;
//    int *p1 {&aa};
//    double *p2 {nullptr};
//    unsigned long long *p3 {nullptr};
//    vector<string> *p4 {nullptr};
//    string *p5 {nullptr};
//    
//    cout << "The value of p1: " << *p1 << endl;
//    cout << "The address of p1: " << &p1 << endl;
//    cout << "The size of p1: " << sizeof(p1) << endl;
//    cout << "The value of p2: "<< p2 << endl;
//    cout << "The address of p2: " << &p2 << endl;
//    cout << "The size of p2: " << sizeof(p2) << endl;
//    cout << "The value of p3: " << p3 << endl;
//    cout << "The address of p3: " << &p3 << endl;
//    cout << "The  size of p3: " << sizeof(p3) << endl;
//    cout << "The value of p4: " << p4 << endl;
//    cout << "The address of p4: " << &p4 << endl;
//    cout << "The size of p4: " << sizeof(p4) << endl;
//    cout << "The value of p5: " << p5 << endl;
//    cout << "The address of p5: " << &p5 << endl;
//    cout << "The size of p5: " << sizeof(p5) << endl;
    
//    double high_temp {100.7};
//    double low_temp {37.2};
//    
//    double *temp_ptr;
//    temp_ptr = nullptr;
//    
//    temp_ptr = &high_temp;
//    cout << "The temp the pointer is pointing is: " << *temp_ptr << endl;
//    temp_ptr = &low_temp;
//    cout << "The temp the pointer is pointing is: " << *temp_ptr << endl;

    int num{10};
    cout << "Value of num is: " << num << endl;
    cout << "sizeof of num is: " << sizeof(num) << endl;
    cout << "Address of num is: " << &num << endl;
    
    int *p;
    cout << "\nValue of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof of p is: " << sizeof(p) << endl;
    
    p = nullptr;
    cout << "\nValue of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof of p is: " << sizeof(p) << endl;
    
    return 0;
}