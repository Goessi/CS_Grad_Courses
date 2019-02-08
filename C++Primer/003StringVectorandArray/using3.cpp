#include <iostream>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data book1, book2;

    cout << "Please enter first book number: " << endl;
    cin >> book1.bookNo;

    cout << "Please enter second book number: " << endl;
    cin >> book2.bookNo;

    cout << " Please enter the sold number of first book: " << endl;
    cin >> book1.units_sold;

    cout << " Please enter the sold number of second book: " << endl;
    cin >> book2.units_sold;

    double price;
    cout << " Please enter the price of first book: " << endl;
    cin >> price;
    book1.revenue = book1.units_sold * price;

    cout << " Please enter the price of second book: " << endl;
    cin >> price;
    book2.revenue = book2.units_sold * price;

    if (book1.bookNo == book2.bookNo) {
        cout << " The number of sales is " << book1.units_sold + book2.units_sold << endl;
    }
    else{
        cout << " Not the same book in hands." <<endl;
    }

    return 0;

}
