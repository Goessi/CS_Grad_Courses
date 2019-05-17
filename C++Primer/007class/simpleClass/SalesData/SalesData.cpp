#include "SalesData.h"
#include <iostream>

std::ostream &print(std::ostream &os, const Salesdata &newitem) {
    os << newitem.BookNo << " : " << newitem.units_sold << " ," << newitem.revenue << std::endl;
    return os;
}
std::istream &read(std::istream &in, Salesdata &newitem) {
    in >> newitem.BookNo >>  newitem.units_sold >>  newitem.revenue;
    return in;
}
Salesdata add(const Salesdata &it1, const Salesdata &it2) {
    Salesdata sum = it1;
    sum.combine(it2);
    return sum;
}


std::string Salesdata::isbn() const {
    return BookNo;
}

Salesdata &Salesdata::combine(const Salesdata &newitem) {
    if (BookNo == newitem.BookNo) {
        units_sold += newitem.units_sold;
        revenue += newitem.revenue;
        return *this;
    }
    else {
        std::cout << "Not the same item" << std::endl;
        return *this;
    }
}

double Salesdata::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}