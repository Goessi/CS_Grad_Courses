#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    string name;
    int health;
    int xp;
    
    void talk(string text_to_say);
    bool is_dead();
};

class Account {
    string name;
    double balance;
    
    bool deposit(double);
    bool withdraw(double);
};

int main() {
    Account haha_account;
    Account qin_account;
    Player haha;
    Player qin;
    
    Player players[] {haha, qin};
    
    Player *jing {nullptr};
    jing = new Player;
    
    vector<Player> player_vec{haha};
    player_vec.push_back(qin);
    
    delete jing;
    return 0;
}
