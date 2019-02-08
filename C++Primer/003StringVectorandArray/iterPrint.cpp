#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    for (auto c = v1.begin(); c != v1.end(); ++c)
        cout<< *c<< " ";
    cout << endl;

    for (auto c = v2.begin(); c != v2.end(); ++c)
        cout << *c<< " ";
    cout << endl;

    for (auto c = v3.begin(); c != v3.end(); ++c)
        cout << *c<< " ";
    cout << endl;

    for (auto c = v4.begin(); c!= v4.end(); ++c)
        cout << *c<< " ";
    cout << endl;

    for (auto c = v5.begin(); c!= v5.end(); ++c)
        cout << *c<< " " ;
    cout << endl;

    for (auto c = v6.begin(); c!= v6.end() && !c -> empty(); ++c)
        cout << *c<< " ";
    cout << endl;

    return 0;
}
