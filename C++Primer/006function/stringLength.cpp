#include <iostream>
#include <string>

using namespace std;

bool isShorter(const string &a, const string &b)
{
    return a.size() > b.size();
}
int main()
{
    cout << "Please enter two strings" << endl;
    string a, b;
    cin >> a >> b;
    cout << "Is a longer than b? " << isShorter(a, b) << endl;
    return 0;
}
