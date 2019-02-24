#include <iostream>
using namespace std;

void swap(int *firstP, int *secondP)
{
    int haha = *secondP;
    *secondP = *firstP;
    *firstP = haha;
}

int main()
{
    int first, second;
    int *one = &first, *two = &second;
    cout << "Please enter two integers" << endl;
    cin >> first >> second;
    cout << "The first number is " << first << " The second number is " << second << endl;
    swap(one, two);
    cout << "The first number is " << first << " The second number is " << second << endl;
    return 0;
}
