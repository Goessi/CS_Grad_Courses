#include <iostream>
using namespace std;

int main()
{
//    int a{10}, b{20};
//    int score{92};
//    int result {};
//    
//    result = (a > b) ? a : b;
//    cout << result << endl;
//    result = (a < b) ? (b - a) : (a-b);
//    cout << result << endl;
//    result = (b != 0) ? (a / b) : 0;
//    cout << result << endl;
//    cout << ((score > 90) ? "Excellent" : "Good") << endl;
//    
//    return 0;

//    int num {};
//    
//    cout << "Enter an integer: ";
//    cin >> num;
//    
//    if (num % 2 == 0)
//        cout << num << " is even" << endl;
//    else
//        cout << num << " is odd" << endl;
//    
//    cout <<num << ((num % 2 == 0)? " is even" : " is odd") << endl;

    int num1 {}, num2 {};
    cout << "Enter two different integers: " << endl;
    cin >> num1 >> num2;
    
    if (num1 == num2)
        cout << "They are the same." << endl;
    else
        cout << ((num1 > num2)? num1 : num2 )<< " is bigger"<< endl;    
    
    return 0;
}