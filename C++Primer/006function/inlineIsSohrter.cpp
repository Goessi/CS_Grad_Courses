#include <iostream>
#include <vector>
#include <string>

using namespace std;

inline bool isShorter(const string &s1, const string &s2)
{
    return (s1.size() <= s2.size());
}

int main()
{
    string s1 = "hahahaha";
    string s2 = "yoy";
    cout << isShorter(s1, s2) << endl;
    return 0;
}
