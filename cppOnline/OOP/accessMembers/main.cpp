#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    string name;
    int health;
    int xp;
    
    void talk(string text_to_say) {
        cout << name << " says " << text_to_say <<endl;
    }
    bool is_dead();
};

class Account {
public:
    string name;
    double balance;
    
    bool deposit(double bal) {
        if  (bal <= balance) {
            cout << "Here is your deposit" << endl;
        }
        else {
            cout << "Soory, you don't have that amount." << endl;
        }
    }
    bool withdraw(double bal) {
        if  (bal <= balance) {
            cout << "Here is your withdraw." << endl;
        }
        else {
            cout << "Soory, you don't have that amount." << endl;
        }
    }
};

int main() {
    Player Jing;
    Jing.name = "Haha";
    Jing.health = 100;
    Jing.xp = 12;
    Jing.talk("Hi");
    
    Player *Qin = new Player;
    Qin->name = "Goessi";
    Qin->health = 100;
    Qin->xp = 99;
    Qin->talk("Hahahhaha");
    
    Account my_account;
    my_account.balance = 9999.99;
    my_account.name = "Jing's Account";
    my_account.deposit(100000000);
    my_account.withdraw(300.0);
    
    Account *account_ptr = new Account;
    account_ptr->balance = 100.0;
    account_ptr->name = "my account";
    account_ptr->deposit(99);
    account_ptr->withdraw(23);
    return 0;
}