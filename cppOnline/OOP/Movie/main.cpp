#include <iostream>
#include <string>
#include "Movies.h"

using namespace std;
void increment_watched(Movies &movies, string name);
void add_movie(Movies &movies, string name, string rating, int watched);

void increment_watched(Movies &movies, string name) {
    if (movies.increment_watched(name)) {
        cout << name << " watch incremented" << endl;
    }
    else {
        cout << name << " not found" << endl;
    }
}

void add_movie(Movies &movies, string name, string rating, int watched) {
    if (movies.add_movie(name, rating, watched)) {
        cout << name << " added " << endl;
    }
    else {
        cout << name << " already exists" << endl;
    }
}

int main() {
    Movies my_movies;
    
    add_movie(my_movies, "Big", "PG-13", 2);
    add_movie(my_movies, "Star War", "PG", 5);
    add_movie(my_movies, "Cinderella", "PG", 7);
    my_movies.display();
    
    add_movie(my_movies, "Cinderella", "PG", 7);
    add_movie(my_movies, "Ice Age", "PG", 12);
    my_movies.display();
    
    increment_watched(my_movies, "Big");
    my_movies.display();
    
    increment_watched(my_movies, "CCCCCCCCC");
    
    return 0;
}