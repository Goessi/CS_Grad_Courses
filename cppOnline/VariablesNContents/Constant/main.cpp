#include <iostream>

using namespace std;

int main()
{
//    version 1
//    int num_room {0};
//    int fees = 32.5;
//    float tax = 0.06;
//    float total_fees = 0.0;
//    
//    cout << "Please input the number room to be cleaned " << endl;
//    cin >> num_room;
//    total_fees = num_room*fees*(1+tax);
//    cout << total_fees << endl;

//    version 2
//    
//    cout << "Hello, welcome to Jing's room clean service." << endl;
//    cout << "\nHow many rooms you wanna me to cleaned?" << endl;
//    int num_room {0};
//    const double price {30.0};
//    const float tax_rate {0.06};
//    const int estimate_expiry {30};
//    cin >> num_room;
//    cout  << "\nEstimate for cleanning service." << endl;
//    cout << "Number of rooms: " << num_room << endl;
//    cout << "Price per room: $" << price << endl;
//    cout << "Cost : $" << price  * num_room << endl;
//    cout << "Tax : $" << price * num_room * tax_rate << endl;
//    cout << "================================" << endl;
//    cout << "Total estimate: $" <<  price * num_room * (1+tax_rate) << endl;
//    cout << "This estimate is valid for " << estimate_expiry <<  " days." << endl;

    // version 3
    
    cout << "Welcome to Goessi cleanning service" << endl;
    cout << "\nEstimate for carpet cleaning service." << endl;
    cout << "Number of samll rooms: ";
    int num_small_room {0};
    cin >> num_small_room;
    cout << "Number of large rooms: ";
    int num_larger_room {0};
    cin >> num_larger_room;
    cout << "Price per small room: $";
    double price_per_small {0.0};
    cin >> price_per_small;
    cout << "Price per large room: $";
    double price_per_large {0.0};
    cin >> price_per_large;
    cout << "Cost: $" << num_small_room * price_per_small + num_larger_room * price_per_large << endl;
    const double tax_rate {0.06};
    cout << "Tax: $" <<  (num_small_room * price_per_small + num_larger_room * price_per_large) * tax_rate << endl;
    cout << "=================================" << endl;
    cout << "Total estimate: $" << (num_small_room * price_per_small + num_larger_room * price_per_large) * (1 + tax_rate) << endl;
    const int days {30};
    cout << "This estimate is valid for " << days << " days" << endl;
    
    
    return 0;
}