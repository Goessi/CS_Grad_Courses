#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    vector<int> grades;
    char cont = 'y';
    while (cin >> grade) {
        grades.push_back(grade);
        cout << "Do you want to add more grade?" << endl;
        cin >> cont;

        if (cont == 'y' || cont == 'Y')
        {
            cout << "Please add a grade" << endl;
        }
        else{
            break;
        }
    }

    for(auto it=grades.begin(); it != grades.end(); ++it)
    {
        int temp = (*it)/10;
        ++scores[temp];
    }

    for(auto c : scores)
        cout << c << " ";
    cout << endl;

    return 0;
}
