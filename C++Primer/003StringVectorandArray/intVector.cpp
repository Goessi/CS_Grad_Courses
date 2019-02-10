#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;
    vector<int> nums2;

    for(int i = 0; i <= 9; ++i)
        nums.push_back(i);
    for(int j = 0; j <= 9; ++j)
        nums2.push_back(j);

    for (auto c : nums2)
        cout << c << " ";
    cout << endl;

    return 0;
}
