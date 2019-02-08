#include <iostream>
#include <string>
using namespace std;
int main()
{
    char cont = 'y';
    string s, r;
    while(cin>>s)
    {
        r = r + " " + s;
        cout << "DO you want to continue? " << endl;
        cin >> cont;
        if (cont == 'y'||cont == 'Y')
        {
            cout << "Please enter a string" << endl;
        }
        else
        {
            break;
        }
    }

    cout << r << endl;

    return 0;
}
