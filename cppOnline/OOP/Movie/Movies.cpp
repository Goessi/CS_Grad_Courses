#include "Movies.h"

Movies::Movies() {
    
}

Movies::Movies(const Movies &source) {
    
}

Movies::~Movies() {
    
}

bool Movies::add_movie(string name, string rating, int watched) {
    Movie mo = Movie(name, rating, watched);
    bool init {true};
    for (auto m : Mo) {
        if (m.getter_name() == name)
            init = false;
    }
    
    if (init) {
        Mo.push_back(mo);
    }
    return init;
}

bool Movies::increment_watched(string name) {
    for (auto &mo : Mo) {
        if (mo.increment_watched(name))
            return true;
    }
    return false;
}

void Movies::display() {
    for (auto mo : Mo) {
        mo.display();
    }
}