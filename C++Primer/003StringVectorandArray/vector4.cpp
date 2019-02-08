#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    char cont = 'y';
    cout << "Please enter a words" << endl;
    string haha;
    vector<string> words;

    while(cin >> haha)
    {
        for (auto &c: haha)
        {
            c = toupper(c);
        }


        words.push_back(haha);
        cout << "Do you want to enter another words?" << endl;
        cin >> cont;
        if (cont == 'y'||cont == 'Y')
        {
            cout << "Please enter a words" << endl;
        }
        else
        {
            break;
        }


    }
    for (auto i : words)
            cout << i << endl;
    return 0;
}
