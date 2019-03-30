#include <iostream>

using namespace std;

int main()
{
//    int total_amount {100};
//    int total_number {8};
//    double average {0.0};
//    
//    average = total_amount / total_number;
//    cout << average << endl;
//    
//    average = static_cast<double>(total_amount)/total_number;
//    cout << average << endl;
    cout << "Please input three integers: " << endl;
    int num1 {0};
    int num2 {0};
    int num3 {0};
    cin >> num1 >> num2 >> num3;
    int sum_of_three = num1 + num2 + num3;
    double average {0.0};
    average = static_cast<double>(sum_of_three)/3;
    cout << "The first number is " << num1 << endl;
    cout << "The second number is " << num2 << endl;
    cout << "The third number is " << num3 << endl;
    cout << "The sum of three numbers is " << sum_of_three << endl;
    cout << "The average of three number is " << average << endl;
    return 0;
}
