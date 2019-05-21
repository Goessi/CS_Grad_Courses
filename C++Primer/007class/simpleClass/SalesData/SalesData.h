#ifndef _SALESDATA_H_
#define _SALESDATA_H_
#include <string>
#include <iostream>
class Salesdata {
    friend std::ostream &print(std::ostream &os, const Salesdata &newitem);
    friend std::istream &read(std::istream &is, Salesdata &newitem);
    friend Salesdata add(const Salesdata &it1, const Salesdata &it2);
private:
    std::string BookNo;
    int units_sold = 0;
    double revenue = 0.0;
public:
    std::string isbn() const;
    Salesdata &combine(const Salesdata &newitem);
    double avg_price() const;
    
    Salesdata();
    Salesdata(const std::string &s);
    Salesdata(const std::string &s, int us, double r);
    Salesdata(std::istream &);
};
#endif