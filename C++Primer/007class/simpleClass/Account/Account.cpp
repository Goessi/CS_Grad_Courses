#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
class Account {
private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
public:
    void calculate() {
        amount += amount * interestRate;
    }
    
    static double rate() {
        return interestRate;
    }
    
    static void rate(double);
};
#endif