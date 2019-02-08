#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    char cont = 'y';
    vector<string> haha;
    string ha;

    cout << "Please enter a string" << endl;
    while (cin >> ha)
    {
        haha.push_back(ha);
        cout << "Do you want to enter another string?" << endl;
        cin >> cont;
        if (cont == 'y' || cont == 'Y')
        {
            cout << "Please enter a string" << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}
