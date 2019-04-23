//Player::Player(std::string name_val, int health_val, int xp_val)
//    : name {name_val}, health{health_val}, xp{xp_val} {
//        
//    }
//
//Player::Player()
//    : Player {"None", 0, 0} {
//        
//    }
//    
//Player::Player(std::string name_val) 
//    : Player {name_val, 0, 0} {
//        
//    }
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
    Player();
    Player(string n);
    Player(string n, int h, int x);
    ~Player();
};

Player::Player(string n, int h, int x)
    : name{n}, health {h}, xp {x} {
    }
    
Player::Player() 
    :Player("None", 0, 0) {
        cout << "No-args constructor" << endl;        
    }
    
Player::Player(string n)
    :Player(n, 0, 0) {
        cout << "One arg" << endl;
    }

Player::~Player() {
    cout <<"Romving..." << endl;
}
    
int main() {
    {
        Player jing;
    }
    
    {
        Player jing("jing", 100, 100);
    }
    
    {
        Player jing3("jing");
    }
    
    return 0;    
}