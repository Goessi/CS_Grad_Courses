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
string Movie::getter_name() const{
    return name;
}
void Movie::setter_rating(string rating) {
    this->rating = rating;
}
string Movie::getter_rating() const{
    return rating;
}
void Movie::setter_watched(int watched) {
    this->watched = watched;
}
int Movie::getter_watched() const{
    return watched;
}


bool Movie::increment_watched(string name) {
    if (this->name == name) {
        this->watched++;
        return true;
    }
    else
        return false;
}   
void Movie::display() const {
    cout << name << " , " << rating << " , " << watched << endl;
}