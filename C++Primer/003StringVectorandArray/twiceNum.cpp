#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> haha{22,33,44,55,66,77,88,99,11,2};

    for (auto it = haha.begin(); it != haha.end(); ++it)
    {
        *it = (*it)*2;
    }

    for (auto num:haha)
        cout << num << " ";
    cout << endl;

    return 0;
}
