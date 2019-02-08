#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    vector<int> numbers;
    int num;
    char cont = 'y';

    cout << "Please enter a number" << endl;
    while(cin >> num)
    {
        numbers.push_back(num);
        cout << "more numbers?" << endl;
        cin >> cont;
        if (cont == 'y' || cont == 'Y')
            cout << "Please enter a number" << endl;
        else
            break;
    }

    for (decltype(numbers.size()) i = 0; i < numbers.size() - 1; i=i+2)
    {
        cout << numbers[i] + numbers[i+1] << endl;
    }

    if (numbers.size()%2 != 0)
        cout << numbers[numbers.size() - 1];

    return 0;
}
