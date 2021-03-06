#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "First element in vector1 " << vector1.at(0) << endl;
    cout << "Second element in vector1 " << vector1.at(1) << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "First element in vector2 " << vector2.at(0) << endl;
    cout << "Second element in vector2 " << vector2.at(1) << endl;
    
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    vector1.at(0) = 1000;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    cout << vector1.at(0) << " Is that 1000?" << endl;
    
    return 0;
}
