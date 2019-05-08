#include "Movies.h"

void Movies::display() const {
    for(size_t i=0; i < Mo.size(); i++) {
        (*Mo)[i].display();
    }
}
bool Movies::increment_num(string name) {
    
}

Movies::Movies() {
    
}

Movies::Movies(const Movies &source) {
    
}

Movies::~Movies() {
    
}