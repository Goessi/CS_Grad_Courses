#ifndef _SALESDATA_H_
#define _SALESDATA_H_
#include <string>
#include <iostream>
class Salesdata {
    friend std::ostream &print(std::ostream &os, const Sales_data &newitem);
    friend std::istream &read(std::istream &is, Sales_data &newitem);
    friend Salesdata add(const Salesdata &it1, const Salesdata &it2);
private:
    std::string BookNo;
    int units_sold = 0;
    double revenue = 0.0;
public:
    std::string isbn() const;
    Salesdata &combine(const Salesdata &newitem);
    double avg_price() const;
};
#endif