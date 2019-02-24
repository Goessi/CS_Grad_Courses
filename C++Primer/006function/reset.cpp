#include <iostream>
#include <string>
#include <vector>

using namespace std;

void reset(int &haha)
{
    haha = 722;
}

int main()
{
    cout << "Please enter a number" << endl;
    int j;
    cin >> j;
    cout << "The number is " << j << endl;
    reset(j);
    cout << "The reseted number is " << j << endl;

    return 0;
}
