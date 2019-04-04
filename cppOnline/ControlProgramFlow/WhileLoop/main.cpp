#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
//    int i {1};
//    while (i <= 5) {
//        cout << i << endl;
//        ++i;
//    }

//    int i {1};
//    while (i <= 10) {
//        if (i % 2 == 0)
//            cout << i << endl;
//        ++i;
//    }
    
//    int scores [] {100, 90, 87};
//    int i {0};
//    while (i < 3) {
//        cout << scores[i] << endl;
//        ++i;
//    }    

//    int number {};
//    cout << "Enter an iteger less than 100: ";
//    cin >> number;
//    
//    while (number >= 100) {
//        cout << "Enter an integer less than 100";
//        cin >> number;
//    }

    bool done {false};
    int num {};
    while (!done) {
        cout << "Enter a number between 1 and 5: " << endl;
        cin >> num;
        if (num <= 1 || num >= 5) {
            cout << "Enter a number between 1 and 5: " << endl;
            cin >> num;
        }
        else {
            done = true;
        }
    }
    return 0;
}