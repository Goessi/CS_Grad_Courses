#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("hahahahhahah232hhhhhh");
    for (char &c:s)
    {
        if(isalpha(c))
            c = 'X';
    }
    cout << s << endl;
    return 0;
}
