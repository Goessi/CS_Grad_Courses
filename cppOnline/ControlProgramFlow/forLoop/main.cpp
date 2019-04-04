#include <iostream>
#include <vector>
using namespace std;

int main() {
//    for (int i {1}; i <= 5; ++i)
//        cout << i << endl;
//        
//    for (int i {1}; i <= 10; i++)
//        if (i % 2 == 0)
//            cout << i << endl;
//            
//    for (int i {1}, j{5}; i <= 5; ++i, ++j) {
//        cout << i << " * " << j << " : " << (i * j) << endl;
//    }
    
//    for(int i {10}; i <= 100; i += 10) {
//        if (i%15 == 0)
//            cout << i << endl;
//    }
//    
//    for (int i{1}, j{5}; i<= 5; ++i, ++j) {
//        cout << i << " + " << j << " = " << i+j << endl;
//    }
    
    
//    for (int i {1}; i <= 100; ++i) {
//        if (i % 10 == 0) {
//            cout << i << " " << endl;
//        }
//        else
//            cout << i << " ";
//    }

//        for (int i {1}; i <= 100; ++i) {
//            cout << i;
//            cout << ((i % 10 == 0)? "\n" : " ");
//        }

    vector <int> nums {10, 20, 30, 40, 50};
    for (unsigned i{0}; i < nums.size(); ++i)
        cout << nums[i] << endl;
    

    
    return 0;
}
