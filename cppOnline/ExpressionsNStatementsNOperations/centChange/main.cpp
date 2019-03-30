#include <iostream>
using namespace std;
int main()
{
    cout << "Please input the number of cents: " << endl;
    int num {};
    cin >> num;
    int dollar {}, quarter {}, dime {}, nickel {}, penny {};
    dollar = num/100;
    num = num - 100 * dollar;
    quarter = num/25;
    num = num - 25 * quarter;
    dime = num/10;
    num = num - 10 * dime;
    nickel = num/5;
    penny = num%5;
    
    cout << "Here is your changes: " << endl;
    cout << "dollars :" << dollar << endl;
    cout << "quarters :" << quarter << endl;
    cout << "dimes : " << dime << endl;
    cout << "nickels : " << nickel << endl;
    cout << "pennis : " << penny << endl;
    
    return 0;
}