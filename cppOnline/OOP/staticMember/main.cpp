#include <iostream>
#include "Player.h"

using namespace std;

void display_ctive_players() {
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main() {
    display_ctive_players();
    Player haha;
    display_ctive_players();
    {
        Player haha1;
        display_ctive_players();
    }
    display_ctive_players();
    return 0;
}
