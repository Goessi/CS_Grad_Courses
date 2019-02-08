#include <iostream>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    Sales_data s;
    s.revenue = 9.9;
    std::cout << s.revenue << std::endl;
    return 0;
}
