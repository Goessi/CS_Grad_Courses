#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    const int haha = 22;
    int array1[haha];

    srand( (unsigned) time (NULL));

    for (auto &a : array1)
        a = rand();

    vector<int> v(begin(array1), end(array1));

    for (auto vv : v)
        cout << vv << endl;

    return 0;

}
