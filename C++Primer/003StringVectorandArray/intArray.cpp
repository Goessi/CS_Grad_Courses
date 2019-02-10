#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int nums[10] = {};
    int nums2[10] = {};
    for (int i = 0; i <= 9; ++i)
    {
        nums[i] = i;
    }

    for (int j = 0; j <= 9; ++j)
    {
        nums2[j] = nums[j];
    }

    for (auto c : nums2)
    {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
