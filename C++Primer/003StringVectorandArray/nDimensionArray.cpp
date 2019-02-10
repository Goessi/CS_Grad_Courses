#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int ia[3][4] = {
    {0,1,2,3},
    {4,5,6,7},
    {8,9,10,11}
    };

    cout << "**********first***********"  <<endl;
    for (int (&a)[4] : ia)
    {
        for (int &b : a)
        {
            cout << b << " ";
        }
        cout << endl;
    }



    cout << "************second************" << endl;

    constexpr size_t rowCnt = 3, colCnt = 4;
    for (size_t i = 0; i != rowCnt; ++i){
        for (size_t j = 0; j != colCnt; ++j)
        {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }

    cout << "*************third for loop************" << endl;
    for (int (*p)[4] = ia; p != ia + 3; ++p )
    {
        for (int *q = *p; q != *p + 4; ++q )
            cout << *q << " ";
        cout << endl;
    }
    cout << endl;


}
