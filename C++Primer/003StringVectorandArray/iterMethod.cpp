#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> text{"Hallo, world, I love you.","", "hahahhaha"};
    for(auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        for(auto &c : *it)
            c = toupper(c);
        cout << *it;
    }
    cout << endl;

    return 0;
}
