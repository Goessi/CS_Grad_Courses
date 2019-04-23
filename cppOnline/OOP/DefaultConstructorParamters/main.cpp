class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    Player(string n="None", int h=0, int x=0);
    ~Player();
};

Player::Player(string n, int h, int x)
    : name{n}, health {h}, xp {x} {
    }
    
//Player::Player() 
//    :Player("None", 0, 0) {
//        cout << "No-args constructor" << endl;        
//    }
//    
//Player::Player(string n)
//    :Player(n, 0, 0) {
//        cout << "One arg" << endl;
//    }

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
