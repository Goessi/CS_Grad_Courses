#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>
using namespace std;
class Movie {
private:
    string movie_name;
    string movie_rating;
    int num_watched;
public:
    void setter_movie_name(string name);
    string getter_movie_name() const;
    
    void setter_movie_rating(string rating);
    string getter_movie_rating() const;
    
    void setter_num_watched(int num);
    int getter_num_watched() const;
    
    void display() const;
    bool increment_num(string name);
    
    Movie(string name, string rating, int num);
    Movie(const Movie &source);
    ~Movie();
}
#endif