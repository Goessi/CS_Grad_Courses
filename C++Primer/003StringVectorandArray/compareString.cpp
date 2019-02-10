#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cout << "Please input two stings" << endl;
    cin >> s1 >> s2;

    if (s1 == s2)
        cout << "s1 equals s2";
    else if (s1 > s2)
        cout << "s1 bigger than s2";
    else
        cout << "s1 less than s2";
    cout << endl;

    return 0;
}
