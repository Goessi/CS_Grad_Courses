#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;
    while (getline(cin, line))
        cout << line << endl;

    while (getline(cin, line))
        if (!line.empty())
            cout << line << endl;

    while (getline(cin, line))
        if (line.size() > 80)
            cout << line << endl;
    return 0;
}
