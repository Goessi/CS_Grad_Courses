#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
//    int scores [] {100, 90, 97};
//    for (int score : scores)
//        cout << score << endl;
//        
//    for (auto score : scores)
//        cout << score << endl;

//    vector<double> temps {87.2, 77.1, 80.0, 72.5};
//    double average_temp {};
//    double running_sum {};
//    
//    for (auto temp : temps)
//        running_sum += temp;
//        
//    average_temp = running_sum / temps.size();
//    cout << average_temp << endl;
    cout << fixed<< setprecision(1);
    float speed [] {100.1, 200.1, 145.8};
    for (float s : speed)
        cout << s/3 << endl;
        
    vector<int> weight {55, 57, 59 ,68};
    int sum_weight {};
    for (int s : weight)
        sum_weight += s;
    cout << sum_weight / weight.size() << endl;
    
    
    string name = "Qin Haha";
    for (char c : name)
        if (c != ' ')
            cout << c << endl;
    return 0;
}