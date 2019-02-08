#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n1, n2;

    cout << "Please enter two numbers: " << endl;
    cin >> n1 >> n2;

    int minNum, maxNum;

    if (n1 <= n2)
    {
        minNum = n1;
        maxNum = n2;
    }
    else
    {
        minNum = n2;
        maxNum = n1;
    }

    while (minNum <= maxNum)
    {
        cout << minNum << endl;
        minNum++;
    }
    return 0;
}
