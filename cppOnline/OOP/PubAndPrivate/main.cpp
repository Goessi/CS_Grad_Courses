#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name {"Player"};
    int health;
    int xp;
public:
    void talk(string text_to_talk) {cout << name << " says " << text_to_talk << endl;}
    bool is_dead();
};

int main() {
    Player jing;
    //jing.name = "Haha";
    jing.talk("haha");
    return 0;
}