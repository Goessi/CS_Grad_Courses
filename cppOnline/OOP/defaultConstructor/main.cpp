//#include <string>
//class Account
//{
//private:
//    std::string name;
//    double balance;
//public:
//    Account() {
//        name = "None";
//        balance = 0.0;
//    }
//    Account(std::string name_val, double bal) {
//        name = name_val;
//        balance = bal;
//    }
//    bool withdraw(double amount);
//    bool deposit(double amount);
//};

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;
public:
    Player() {
        name = "NoArgs";
        health = 100;
        xp = 100;
    }
    Player(string n, int h) {
        name = n;
        health = h;
    }
    Player(int h, int x) {
        health = h;
        xp = x;
    }
    Player(string n, int h, int x) {
        name = n;
        health = h;
        xp = x;
    }
    ~Player() {
        cout << name << " is leaving..." << endl;
    }
    void set_name(string name_val) {
        name = name_val;
    }
    string get_name() {
        return name;
    }
};

int main() {
    {
        Player jing1;
    }
    
    {
        Player jing2("Goessi", 100);
    }
    
    {
        Player jing3("Messi", 100, 99);
    }
    
    {
        Player jing4(100,99);
    }
    return 0;
}