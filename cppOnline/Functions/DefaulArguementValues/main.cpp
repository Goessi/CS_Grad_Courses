#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double calc_cost (int base_cost, double tax_rate = 0.06);
double calc_cost (double base_cost, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Dr.", string suffix = " ");

double calc_cost(int base_cost, double tax_rate) {
    return base_cost += (base_cost * tax_rate);
}

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix , string suffix) {
    cout << "Hallo, " << prefix << name << suffix << endl;
}

int main() {
    double cost {0};
    cost = calc_cost(100.0, 0.06, 3.5);
    cout << cost << endl;
    
    cost = calc_cost(200, 0.08);
    cout << cost << endl;
    
    greeting("haha");
    return 0;
}