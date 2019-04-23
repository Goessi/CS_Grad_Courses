#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
public:
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);    
};

Player::Player()
    : name{"None"}, health{0}, xp{0} {

}

Player::Player(string name_val) 
    : name {name_val}, health {0}, xp {0} {
        
    }
    
Player::Player(string name_val, int h, int x)
    : name{name_val}, health {h}, xp {x} {
        
    }
    
int main() {
    Player empty;
    Player haha("haha");
    Player xixi("xixi", 10, 9);
    
    return 0;
}