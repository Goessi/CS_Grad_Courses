#include <iostream>
#include <string>

using namespace std;

class Sales_data1
{
    friend Sales_data1 add(const Sales_data1&, const Sales_data1&);
    friend ostream &print(ostream&, const Sales_data1&);
    friend istream &read(istream&, Sales_data1&);

public:
    Sales_data1() = default;
    Sales_data1(const string &s): bookNo(s) {}
    Sales_data1(const string &s, unsigned n, double p):
        bookNo(s), units_sold(n), revenue(p*n) {}
    Sales_data1(std::istream &is) {is >> *this;}

    string isbn() const {return bookNo; }
    Sales_data1& combine(const Sales_data1&);
    double avg_price() const;
private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};



double Sales_data1::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

Sales_data1& Sales_data1::combine(const Sales_data1 &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &read(istream &is, Sales_data1 &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}


ostream &print(ostream &os, const Sales_data1 &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data1 add(const Sales_data1 &lhs, const Sales_data1 &rhs)
{
    Sales_data1 sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream& operator >> (std::istream& in, Sales_data1& s)
{
    in >> s.bookNo >> s.units_sold;
    return in;
}

std::ostream& operator << (std::ostream& out, const Sales_data1& s)
{
    out << s.isbn() << " " << s.units_sold << " " << s.revenue;
    return out;
}
int main()
{
    Sales_data1 haha1;
    Sales_data1 haha2 ("isbn-0000");
    Sales_data1 haha3 ("isbn-0001", 10, 100.00);
    Sales_data1 haha4 (cin);

    cout << "haha 1" << haha1 << " " << "haha 2" << haha2 << "haha 3" << haha3 << "haha 4" << haha4;

    return 0;

}
