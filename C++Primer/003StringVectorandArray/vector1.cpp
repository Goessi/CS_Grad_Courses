#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    int k;
    char cont = 'y';
    vector<int> numV;
    while (cin >> k)
    {
        numV.push_back(k);
        cout << "Do you want to enter another number?" << endl;
        cin >> cont;
        if (cont == 'y' || cont == 'Y')
            cout << "Please enter another number" << endl;
        else
            break;
    }

    return 0;
}
