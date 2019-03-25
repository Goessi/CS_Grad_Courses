#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{
    cout << "char " << sizeof(char) << endl;
    cout << "int " << sizeof(int) << endl;
    cout << "unsigned int " << sizeof(unsigned int) << endl;
    cout << "short " << sizeof(short) << endl;
    cout << "long " << sizeof(long) << endl;
    cout << "long long " << sizeof(long long) << endl;
    
    cout << "float " << sizeof(float) << endl;
    cout << "double " << sizeof(double) << endl;
    cout << "long double " << sizeof(long double) << endl;
    
    cout << "char " << CHAR_MIN << endl;
    cout << "int " << INT_MIN << endl;
    cout << "short " << SHRT_MIN << endl;
    cout << "long " << LONG_MIN << endl;
    cout << "long long " << LLONG_MIN<< endl;
    
    cout << "char " << CHAR_MAX<< endl;
    cout << "int " << INT_MAX << endl;
    cout << "short " << SHRT_MAX << endl;
    cout << "long " << LONG_MAX << endl;
    cout << "long long " << LLONG_MAX<< endl;
    
    int age {24};
    cout << "size of var " << sizeof(age) << endl;
    cout << "size of var " << sizeof age << endl;
    
    double wage {66.66};
    cout << "wage is " << sizeof(wage) << endl;
    cout << "wage is " << sizeof wage <<endl;
    
    
    return 0;
}
