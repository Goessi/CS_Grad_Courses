#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, r;
    cout << "Please enter a string" << endl;
    cin >> s;

    for (auto c : s)
    {
        if (!ispunct(c))
            r = r + c;
        else
            break;
    }
    cout << r << endl;
    return 0;
}
