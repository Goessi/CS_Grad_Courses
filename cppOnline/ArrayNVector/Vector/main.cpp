#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <char> vowels (5);
    vector <int> test_scores (10);
    
    // access vector elements v1
    vector <int> test {100, 99, 98};
    
    cout << "First score at index 0 " << test[0] << endl;
    cout << "Second score at index 1 " << test[1] << endl;
    cout << "Third score at index 2 " << test[2] << endl;
    
    // v2
    cout << "First score at index 0 " << test.at(0) << endl;
    cout << "Second score at index 1 " << test.at(1) << endl;
    cout << "Third score at index 2 " << test.at(2) << endl;
    
    test.push_back(99);
    cout << "Forth score at index 3 " << test.at(3) << endl;
    
    vector <int> haha (3, 99);
    cout << haha.at(0)<<endl;
    cout << haha.at(1) << endl;
    cout << haha.at(2) << endl;
    
    vector <vector<int>> movie_rating 
    {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };
    
    cout << movie_rating[0][0] << endl;
    
    cout << movie_rating.at(0).at(0) << endl; 
    
    vector <int> vec {10,20,30,40,50};
    vec.at(0) = 100;
    cout << type(vec.size()) << endl;

    return 0;  
    
}

