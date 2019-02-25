#include <iostream>
#include <vector>
#include <string>

using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return (ctr > 1)? word + ending : word;
}

int main()
{
    cout << "one success is " << make_plural(1, "success") << endl;
    cout << "more success is " << make_plural(2, "success", "es") << endl;
    cout << "one failure is " << make_plural(1, "failure") << endl;
    cout << "more failure is " << make_plural(2, "failure") << endl;
    return 0;
}
