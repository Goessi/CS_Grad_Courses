#include <iostream>

using namespace std;

int main()
{
    double num_eruos {0.0};
    cout << "Please input the number of Euros: " << endl;
    cin >> num_eruos;
    const double rate {1.13};
    cout << "The USD is " << num_eruos * rate << endl;
    return 0;
}
