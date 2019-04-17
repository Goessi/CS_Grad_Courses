#include <iostream>
using namespace std;

int main() {
//    int *int_ptr {nullptr};
//    int_ptr = new int;
//    cout << int_ptr << endl;
//    cout << *int_ptr << endl;
//    *int_ptr = 100;
//    cout << *int_ptr << endl;
//    delete int_ptr;
//    
//    int *array_ptr {nullptr};
//    int size {};
//    cout << "How big do you want the array? ";
//    cin >> size;
//    array_ptr = new int[size];
    
//    delete [] array_ptr;

    int *int_ptr {nullptr};
    int_ptr = new int;
    
    delete int_ptr;
    
    double *doubles_ptr {nullptr};    
    int size {};
    cout << "The size of an array? " << endl;
    cin >> size;
    doubles_ptr = new double[size];
    
    delete [] doubles_ptr;
    
    return 0;
}
