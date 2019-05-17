#include "SalesData/SalesData.h"
#include <iostream>

std::ostream &print(std::ostream &os, const Sales_data &newitem) {
    os << newitem.BookNo << " : " << unit_sold << " ," << revenue << std::endl;
    return os;
}
std::istream &read(std::istream &in, Sales_data &newitem) {
    
}
Salesdata add(const Salesdata &it1, const Salesdata &it2) {
    if (it1.BookNo == it2.BookNo) {
        
    }
    else {
        
    }
}


std::string Salesdata::isbn() const {
    return BookNo;
}
Salesdata &Salesdata::combine(const Salesdata &newitem) {
    units_sold += newitem.units_sold;
    revenue += newitem.revenue;
    return *this;
}
double Salesdata::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}