#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isBig(const string &s)
{
    string::size_type st = s.size();
    for (decltype(st) c = 0; c != st; ++c)
    {
        if (isupper(s[c]))
            return true;
    }
    return false;
}

void tolowercase(string &s)
{
    for (auto &d:s)
        d = tolower(d);
}

int main()
{
    cout << "Please enter a string" << endl;
    string s;
    cin >> s;
    cout << "Is the string has uppercase letter? " << isBig(s) << endl;
    tolowercase(s);
    cout << "the Lower string is " << s << endl;
    return 0;
}
