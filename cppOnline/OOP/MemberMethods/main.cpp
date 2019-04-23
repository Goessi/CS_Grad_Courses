#include <iostream>
#include <string>
#include "Account.h"

int main() {
    Account frank_account;
    frank_account.set_balance(1000.00);
    frank_account.set_name("Fank's account");
    
    if (frank_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not allowed" << endl;
        
    if (frank_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
        
    if(frank_account.withdraw(1500.0))
        cout << "Withdraw OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    return 0;
}