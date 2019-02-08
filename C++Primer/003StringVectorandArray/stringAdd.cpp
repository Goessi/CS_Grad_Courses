#include <iostream>
#include <string>

using namespace std;

int main()
{
    char cont = 'y';
    string s, r, c;
    while (cin >> s)
    {
        r = r + s;
        cout << "DO you want to continue? " << endl;
        cin >> cont;
        if (cont == 'y' || cont == 'Y')
            cout << "please continue another string" << endl;
        else
            break;
    }
    cout << r << endl;
    return 0;
}
