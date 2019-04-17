#include <iostream>

using namespace std;

int main() {
    
  
    int high_score {100};
    int low_score {65};
    
    // Pointer to constant
    const int *score_ptr1 {&high_score};    
    // *score_ptr = 86; // error
    score_ptr1 = &low_score;
    
    // Constant pointer
    int *const score_ptr2 {&high_score};
    *score_ptr2 = 86;
    //score_ptr2 = &low_score; // Error
    
    
    // constant pointer to constant
    const int *const score_ptr3 {&high_score};
    //*score_ptr3 = 86; //error
    //score_ptr3 = &low_score; //error
    return 0;
}