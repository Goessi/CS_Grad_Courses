#ifndef __MOVIE_H_
#define _MOVIE_H_
#include <iostream>
#include <string>
using namespace std;

class Movie {
private:
    string name;
    string rating;
    int watched;
    
public:
    Movie(string n, string r, int w);
    Movie(const Movie &source);
    ~Movie();
    
    // getter and setter
    void setter_name(string name);
    string getter_name() const;
    void setter_rating(string rating);
    string getter_rating() const;    
    void setter_watched(int watched);
    int getter_watched() const;
    
    
    bool increment_watched(string name);    
    void display() const;
};

#endif