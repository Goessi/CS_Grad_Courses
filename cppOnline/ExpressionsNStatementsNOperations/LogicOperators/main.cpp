#include <iostream>

using namespace std;

int main()
{
    int num {};
    const int lower {10};
    const int upper {20};
    
    cout << boolalpha;
    
    cout << "Enter an integer - the bounds are " << lower << " and "<< upper << endl;
    cin >> num;
    
//    bool within_bounds {false};
//    within_bounds = (num > lower && num < upper);
//    cout << num << "is between " << lower << " and" << upper << ":" << within_bounds << endl;
//    bool outside_bounds {false};
//    outside_bounds = (num < lower || num > upper);
//    cout << num << " is outside " << lower << " and " << upper << ":" << outside_bounds << endl;
//    bool exact_bounds {false};
//    exact_bounds = (num == lower || num == upper);
//    cout << num << " is exactly on "<< lower << " or " << upper << ":" << exact_bounds << endl;

    // if you need a coat
    bool wear_coat {false};
    double temperature {};
    int wind_speed {};
    
    const int wind_speed_for_coat {25};
    const double temperature_for_coat {45};
    
    cout << "Please input the wind speed: " << endl;
    cin >> wind_speed;
    cout << "Please input the temperature: " << endl;
    cin >> temperature;
    wear_coat = (wind_speed >= wind_speed_for_coat) && (temperature <= temperature_for_coat);
    cout << "If you need a coat: " << wear_coat << endl;
    return 0;
    
}