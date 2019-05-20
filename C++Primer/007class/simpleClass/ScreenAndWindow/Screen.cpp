#include "Screen.h"
#include <iostream>
Screen::Screen(pos ht, pos wd)
    :height(ht), width(wd){
        
    }
    
Screen::Screen(pos ht, pos wd, char c) 
    :height{ht}, width{wd}, contents{ht*wd, c} {
        
    }
    
char Screen::get() const {
    return contents[cursor];
}

char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
    
}

Screen &Screen::move (pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

void Screen::some_member() const {
    ++access_ctr;
}

Screen &Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

Screen &Screen::set(pos r, pos col, char ch) {
    contents[r*width + col] = ch;
    return *this;
}

Screen &Screen::display(std::ostream &os) {
    std::cout << contents;
    return *this;
}

const Screen &Screen::display(std::ostream &os) const {
    std::cout << contents;
    return *this;
}
