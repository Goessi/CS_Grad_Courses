#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
//    int score {100};
//    int *score_ptr {&score};
//    
//    cout << *score_ptr << endl;
//    
//    *score_ptr = 200;
//    cout << *score_ptr << endl;
//    cout << score << endl;
//    
//    double high_temp {100.7};
//    double low_temp {37.4};
//    double *temp_ptr {&high_temp};
//    
//    cout << *temp_ptr << endl;
//    temp_ptr = &low_temp;
//    cout << *temp_ptr << endl;

//    string name {"Frank"};
//    string *string_ptr {&name};
//    cout << *string_ptr << endl;
//    name = "James";
//    cout << *string_ptr << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};
    
    vector_ptr = &stooges;
    
    cout << "First Stooge: " << (*vector_ptr).at(0) << endl;
    
    cout << "Stooges: ";
    for(auto stooge: *vector_ptr)
        cout << stooge << " ";
    cout << endl;
    
//    int a [] = {1,2,3};
//    int *int_ptr = {&a};
//    cout << *int_ptr << endl;
    return 0;
}
