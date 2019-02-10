#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    const char ca[] = {'h','e','l','l','o'};
    const char *cp = ca;
    while (*cp)
    {
        cout << *cp << endl;
        ++cp;
    }
    cout << "*******************************" << endl;

    const char ca1[] = {'h','e','l','l','o','\0'};
    const char *cp1 = ca1;
    while (*cp1)
    {
        cout << *cp1 << endl;
        ++cp1;
    }

    return 0;
}
