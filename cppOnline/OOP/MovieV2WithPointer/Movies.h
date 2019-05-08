#ifndef _MOVIES_H_
#define _MOVIES_H_
#include "Movie.h"
#include <vector>

using namespace std;

class Movies {
private:
    vector<Movie> *Mo;
public:
    void display() const;
    bool increment_num(string name);
    
    Movies();
    Movies(const Movies &source);
    ~Movies();
}
#endif