#include <iostream>
#include <string>

int main() {
    typedef std::string::size_type pos;
    pos a {1};
    pos b {2};
    std::string haha {a*b, ' '};
    std::cout << haha;
    std::cout << "haha";

    return 0;
}
