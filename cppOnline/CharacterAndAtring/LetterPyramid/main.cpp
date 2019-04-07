#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter your string: ";
    string user_input;
    cin >> user_input;
    
    for (size_t i {0}; i < user_input.length(); i++){
        for (size_t j {0}; j < user_input.length() - i; j++)
            cout <<" ";
        int count {0};
        for(char c : user_input) {
            cout << c;
            count+=1;
            if (count -1 == i)
                break;
        }
        while (count -  2 >=0) {
            cout <<user_input.at(count - 2);
            count -=1;
        }
        cout << endl;
        
    }
    return 0;
}
