#include <iostream>
#include <string>
#include "Screen.h"
int main() {
//    typedef std::string::size_type pos;
//    pos a {1};
//    pos b {2};
//    std::string haha {a*b, ' '};
//    std::cout << haha;
//    std::cout << "haha";

    Screen myScreen (5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";

    return 0;
}
