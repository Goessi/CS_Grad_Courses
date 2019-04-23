#include <iostream>
#include <string>

using namespace std;


class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string name_val) {
        name = name_val;
    }
    Player() {
        cout << "No args constructor called" << endl;
    }
    Player(std::string name) {
        cout << "String arg constructor called" << endl;
    }
    Player(std::string name, int health, int xp) {
        cout << "Three args constructor called" << endl;
    }
    
    ~Player() {
        cout <<"Destructor called for " << name << endl;
    }
};

//class Account
//{
//private:
//    std::string name;
//    double balance;
//public:
//    Account();
//    Account(std::string name, double balance);
//    Account(std::string name);
//    Account(double balance);
//    
//    ~Account();
//};

int main() {
    Player jing;
    Player k("haha");
    Player m("haha",100,100);
    
    return 0;
}