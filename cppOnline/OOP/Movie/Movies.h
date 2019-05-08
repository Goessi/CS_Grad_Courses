#ifndef _MOVIES_H_
#define _MOVIES_H_
#include "Movie.h"
#include <vector>

class Movies {
private:
    vector<Movie> Mo;
public:
    Movies();
    Movies(const Movies &source);
    ~Movies();
    
    bool add_movie(string name, string rating, int watched);
    bool increment_watched(string name);
    void display();
};

#endif