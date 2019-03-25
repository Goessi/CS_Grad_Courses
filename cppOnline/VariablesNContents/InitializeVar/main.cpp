#include <iostream>

using namespace std;
int main()
{
    int age {0};    
    cout << age << endl;
    
    int width {0}, length {0};
    cout << "Please input the length and the width" << endl;
    cin >> length >> width;
    cout << length * width << endl;
    return 0;
}
