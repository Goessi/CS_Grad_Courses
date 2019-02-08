#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    cout << "Please enter two strings: " << endl;
    cin >> s1 >> s2;

    auto t1 = s1.size();
    auto t2 = s2.size();

    if (t1 == t2)
    {
        cout << "They are same length" << endl;
    }
    else
    {
        if (t1 >= t2)
        {
            cout<< s1 <<endl;
        }
        else
        {
            cout<< s2 <<endl;
        }

    }
    return 0;
}
