#ifndef _MOVIES_H_
#define _MOVIES_H_
#include "Movie.h"
#include <vector>

class Movies {
private:
    vector<Movie> Movies;
public:
    Movies();
    Movies(const Movies &source);
    ~Movies();
    
    void add_movie(Movies &m, string name, string rating, int watched);
    bool increment_watched(string name);
    void display();
};

#endif