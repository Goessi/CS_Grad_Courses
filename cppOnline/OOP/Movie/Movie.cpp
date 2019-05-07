#include "Movie.h"

Movie::Movie(string n, string r, int w)
    :name{n}, rating{r}, watched{w} {        
    }
    
Movie::Movie(const Movie &source) 
    :name{source.name}, rating{source.rating}, watched{source.watched} {
    }
    
Movie::~Movie() {
    
}

// getter and setter
void Movie::setter_name(string name) {
    this->name = name;
}
string Movie::getter_name() {
    return name;
}
void Movie::setter_rating(string rating) {
    this->rating = rating;
}
string Movie::getter_rating() {
    return rating;
}
void Movie::setter_watched(int watched) {
    this->watched = watched;
}
int Movie::getter_watched() {
    return watched;
}


bool Movie::increment_watched(string name) {
    if (this->name == name)
        return true;
    else
        return false;
}   
void Movie::display() {
    cout << name << " , " << rating << " , " << watched << endl;
}