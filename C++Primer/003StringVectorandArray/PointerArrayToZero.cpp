#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10};

    int *p = arr;
    for (int i = 0; i < 11; ++i)
    {
        *p = 0;
        ++p;
    }

    for (auto c : arr)
        cout << c << endl;

    return 0;
}
