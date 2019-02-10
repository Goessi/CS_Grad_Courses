#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int ia[] = {0,1,2,3,-4,5,6,7,8,9};
    int *beg = begin(ia);
    int *last = end(ia);

    while(beg != last && *beg >= 0)
    {
        ++beg;
    }
    cout << *beg << endl;
    return 0;
}
