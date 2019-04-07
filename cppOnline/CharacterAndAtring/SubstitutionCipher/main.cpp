#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alpha {"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"};
    string key {"JjKkLlMmNnOoWwXxYyZzPpAaBbCcDdQqRrSsTtUuVvEeFfGgHhIi"};
    string Message;
    cout << "Enter your secret message: ";
    getline(cin, Message);
    cout << endl;
    cout << "Encrypting message..." << endl;
    
    string new_Message;
    for (char c : Message) {
        size_t position = alpha.find(c);
        if (position != string::npos) {
            new_Message +=key.at(position);
        }
        else {
            new_Message += c;
        }
    }
    cout << "\nEncrypted message: " << new_Message << endl;
    
    cout << "\nDecrypting message..." << endl;
    string new_Message2;
    for (char c : new_Message) {
        size_t position = key.find(c);
        if (position != string::npos) {
            new_Message2 +=alpha.at(position);
        }
        else {
            new_Message2 += c;
        }
    }
    
    cout << "\nDecrypted message: " << new_Message2 << endl;
    
    return 0;
    
}
