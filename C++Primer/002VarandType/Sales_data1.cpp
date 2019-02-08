#include <iostream>
#include <string>
#include "Sales_data.h"


int main() {
    Sales_data data1, data2;
    double price = 0;

    std::cout << "Please input first bookNo " << std::endl;
    std::cin >> data1.bookNo;

    std::cout << "Pleas input first number of solds " <<std::endl;
    std::cin >> data1.unit_sold;

    std::cout << "Please input first book price " << std::endl;
    std::cin >> price;

    data1.revenue = data1.unit_sold*price;

    std::cout << "Please input second bookNo " << std::endl;
    std::cin >> data2.bookNo;

    std::cout << "Pleas input second number of solds" <<std::endl;
    std::cin >> data2.unit_sold;

    std::cout << "Please input second book price" << std::endl;
    std::cin >> price;

    data2.revenue = data2.unit_sold*price;

    if (data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.unit_sold + data2.unit_sold;
        double totalRevenue = data1.revenue + data2.revenue;

        std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";

        if (totalCnt != 0) {
            std::cout << totalRevenue/totalCnt << std::endl;
        }
        else {
            std::cout << " no Sales " << std::endl;
        }
        return 0;
    }
    else
    {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }

    return 0;

}
