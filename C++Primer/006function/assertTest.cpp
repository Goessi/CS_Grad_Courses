#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> a, unsigned sz)
{
    #ifdef NDEBUG
           cerr << __func__<< endl;
    #endif // NDEBUG
    unsigned z = a.size();
    if (!a.empty()&&sz != z)
    {
        cout << a[sz]<< endl;
        print(a, ++sz);
    }
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    print(v, 0);
    return 0;
}

