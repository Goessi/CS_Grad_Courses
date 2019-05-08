#include "Movie.h"
#include <iostream>
using namespace std;
void Movie::setter_movie_name(string name) {
    movie_name = name;
}
string Movie::getter_movie_name() const {
    return movie_name;
}

void Movie::setter_movie_rating(string rating) {
    movie_rating = rating;
}
string Movie::getter_movie_rating() const {
    return movie_rating;
}

void Movie::setter_num_watched(int num) {
    num_watched = num;
}
int Movie::getter_num_watched() const {
    return num_watched;
}

void Movie::display() const {
    cout << movie_name << " ," << movie_rating << " ," << num_watched << endl;
}
bool Movie::increment_num(string name) {
    if (movie_name == name)
        return true;
    else
        return false;
}

Movie::Movie(string name, string rating, int num) 
    : movie_name{name}, movie_rating{rating}, num_watched{num} {
        
}
    
Movie::Movie(const Movie &source) 
    :movie_name{source.movie_name}, movie_rating{movie_rating}, num_watched{num}{
    
}

Movie::~Movie() {
    
}