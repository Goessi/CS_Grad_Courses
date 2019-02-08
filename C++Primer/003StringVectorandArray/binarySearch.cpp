#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> aList = {2,3,4,5,6,10,23,34,45,67};
    int num = 10;
    auto beginofList = aList.begin();
    auto endofList = aList.end();
    auto medofList = beginofList + (endofList - beginofList)/2;

    while (medofList != endofList && *medofList != num)
    {
        if (num < *medofList)
            endofList = medofList;
        else
            beginofList = medofList + 1;
        medofList = beginofList + (endofList - beginofList)/2;
    }

    cout << *medofList << endl;
    return 0;
}
