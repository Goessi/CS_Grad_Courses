// Declaring the copy constructor
// const and reference
// Type::Type(const Type &source);
// Player::Player(const Player &source);
// Account::Account (const Account &source);

//Implementing the copy constructor
//Player::Player(const Player &source)
//    : name {source.name},
//      health {source.health},
//      xp {source.xp} {
//          
//}

#include <string>
#include <iostream>
using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name() {return name;}
    int get_health() { return health;}
    int get_xp() {return xp;}
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    Player(const Player &source);
    ~Player() {cout << "Destructor " << name << endl;}
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout <<"Three-args constructor for " + name << endl;
}

Player::Player(const Player &source)
    :name{source.name}, health{source.health}, xp{source.xp} {
         cout << "Copy constructor of " << name<< endl;
}

void display_player(Player p) {
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() <<endl;
}

int main() {
    Player empty;
    display_player(empty);
    Player frank{"Frank"};
    Player hero {"Hero", 100};
    Player vilian {"Villain", 100, 55};
    
    return 0;
}