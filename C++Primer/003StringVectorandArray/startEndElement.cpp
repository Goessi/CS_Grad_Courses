#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    char cont = 'y';
    vector<int> numbers;
    int num;

    cout << "Please enter a number" << endl;
    while(cin >> num)
    {
        numbers.push_back(num);
        cout << "More numbers?" << endl;
        cin >> cont;

        if (cont == 'y' || cont == 'Y')
        {
            cout << "Please enter a number" << endl;
        }
        else
        {
            break;
        }
    }

    for(decltype(numbers.size()) i = 0; i < numbers.size()/2; i++)
    {
        cout << numbers[i] + numbers[numbers.size() - 1 - i] << endl;
    }

    if (numbers.size()/2 != 0)
        cout << numbers[numbers.size()/2] << endl;

    return 0;
}
