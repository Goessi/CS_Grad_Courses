#include <iostream>
using namespace std;

int main()
{
    int num {};
    cout << "Please input an integer: " << endl;
    cin >> num;
    
    const int max {100};
    const int min {10};
    
    if (num >= min) {
        cout << "====if version 1====" << endl;
        cout << "The input is more than or equals to " << min << endl;
        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }
    
    if (num <= max) {
        cout << "====if version 2====" << endl;
        cout << "The input is less than or equals to " <<  max << endl;
        int diff {max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }
    
    if ( num >= min && num <= max) {
        cout << "====if version 3====" << endl;
        cout << "The input is less than or equals to " << max << "  , and it is more than or equals to " << min<< endl;
        int diff1 {max - num};
        int diff2 {num - min};
        cout << num << " is " << diff1 << " less than " << max << "  , and it is " << diff2 << " more than " << min << endl;
    }
    
    if (num == min || num == max) {
        cout << "====if version 4====" << endl;
        cout << "The output is " << min << " or " << max << endl;
    }
   return 0;
}