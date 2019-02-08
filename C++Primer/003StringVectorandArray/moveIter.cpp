#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s("some string");
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it);

    for(auto c: s)
        cout << c;
    cout << endl;

    return 0;
}
