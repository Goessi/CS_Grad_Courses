#include <iostream>
#include <string>
#include <vector>
using namespace std;

string::size_type find_char(const string &s, char c, string::size_type &num)
{
    auto length = s.size();
    num = 0;
    for(decltype(length) i = 0; i != s.size(); ++i)
    {
        if(s[i] == c)
        {
            if (length == s.size())
            {
                length = i;
            }

            ++num;
        }

    }
    return length;
}

int main()
{
    cout << "Please enter a string" << endl;
    string s;
    cin >> s;
    string::size_type n;
    cout << "The first time the char occurs is " << find_char(s, 'o', n) << endl;
    cout << "The number of the char occurs is " << n << endl;

    return 0;
}
