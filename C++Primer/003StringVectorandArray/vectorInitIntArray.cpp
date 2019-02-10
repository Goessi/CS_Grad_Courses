#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    const int haha = 22;

    vector<int> v;
    int vv;
    srand((unsigned)time(NULL));

    for (int i = 0; i != haha; ++i)
    {
        vv = rand()%100;
        v.push_back(vv);
    }

    int array1[v.size()];
    auto ptr = v.cbegin();

    for (auto &a : array1)
    {
        a = *ptr;
        cout << a << endl;
        ptr++;
    }
    cout << endl;

    return 0;


}
