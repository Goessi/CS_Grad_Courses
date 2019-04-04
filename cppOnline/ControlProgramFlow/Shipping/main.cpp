#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "Welcome to Jing's shipping company. " << endl;
    cout << "Please input your package dimensions in inches. " << endl;
    int length {}, width {}, height {};
    cout << "All dimensions must be 10 inches or less." <<endl;
    cin >> length >> width >> height;
//    cout << fixed << setprecision(2);
    if (length > 10 || width > 10 || height > 10) 
        cout << "Sorry, we cannot ship it." <<endl;
    else {
        int volume = length * width * height;
        double base_cost = 2.5;
        if (volume > 500) {
            base_cost *= 1.25;
            cout << "The fee is $ " <<  base_cost << endl;
        }
        else if (volume > 100) {
            base_cost *= 1.1;
            cout << "The fee is $ " <<  base_cost << endl;
        }
        else {
            cout << "The fee is $ " << base_cost << endl;
        }
    }
    
    return 0;
}
