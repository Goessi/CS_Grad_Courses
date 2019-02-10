#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int *e = &arr[10];

    for(int *b = arr; b!= e; ++b)
        cout << *b << endl;

    return 0;
}
