#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    string a;
    for (int i = 0; i != argc; ++i)
    {
        a +=argv[i+1];
    }
    cout << a;
    return 0;
}
