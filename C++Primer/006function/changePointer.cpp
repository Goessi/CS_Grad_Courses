#include <iostream>
#include <string>
#include <vector>

using namespace std;

void changePs(int *&a, int *&b)
{
    int *c = a;
    a = b;
    b = c;
}
int main()
{
    int aa = 1, bb = 2;
    int *a = &aa;
    int *b = &bb;
    changePs(a, b);
    cout << *b << *a << endl;
    return 0;
}
