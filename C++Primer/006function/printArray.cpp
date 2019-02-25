#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print1(const char *cp)
{
    if(cp)
    {
        while(*cp)
        {
            cout << *cp++ << " ";
        }
    }
}

void print2(const int *b, const int *e)
{
    while (b != e)
    {
        cout << *b++ << " ";
    }
}

void print3(const int *s, size_t st)
{
    for (size_t c=0; c != st; c++)
        cout << s[c] << " ";
}

int main()
{
    int haha[10] = {0,1,2,3,4,5,6,7,8,9};
    const char h[] = "hahaha\0";
    cout << "test of print1" << endl;
    print1(h);
    cout << "test of print2" << endl;
    print2(begin(haha),end(haha));
    cout << "test of print3" << endl;
    print3(haha, 10);
    return 0;
}
