#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[100], s2[100];
    cout << "Please input two strings" << endl;
    cin >> s1 >> s2;
    auto haha = strcmp(s1, s2);

    if (haha == 1)
        cout << "s1 is bigger than s2";
    else if (haha == -1)
        cout << "s2 is bigger than s1";
    else if (haha == 0)
        cout << "s2 equals s1";
    cout << endl;

    return 0;
}
