#include <iostream>
#include <string>
using namespace std;
int main()
{
//    string s1;
//    string s2 {"Frank"};
//    string s3 {s2};
//    stirng s4 {"Frank", 3};
//    string s5 {s3, 0, 2};
//    string s6 (3, 'X');

//    string s0;
//    string s1 {"Apple"};
//    string s2 {"Banana"};
//    string s3 {"Kiwi"};
//    string s4 {"apple"};
//    string s5 {s1};
//    string s6 {s1, 0, 3};
//    string s7 (10, 'X');
//    
//    cout << s0 << endl;
//    cout << s0.length() << endl;
//    
//    cout <<"s1 == s5 is " << (s1 == s5) << endl;
//    cout << "s1 == s2 is " << (s1 == s2) << endl;
//    cout << "s1 != s2 is " << (s1 != s2) << endl;
//    cout << "s1 < s2 is " << (s1 < s2 )<< endl;
//    cout << "s2 > s1 is " << (s2 > s1) << endl;
//    cout << "s4 < s5 is " << (s4 < s5) << endl;
//     
//    string haha {"Jing Qin is the greatest person in the universal." };
//    cout << haha.substr(0, 4) << endl;
//    cout << haha.substr(0, 8) << endl;
//    cout << haha.substr(8, 1) << endl;
//    
//    string xixi {"Goessi is a warm girl~"};
//    cout << xixi.find("Goessi") << endl;
//    cout << xixi.find("is") << endl;
//    cout << xixi.find("girl") << endl;
//    cout << xixi.find("XX") << endl;
//    
//    cout << haha.erase(0,4) << endl;
//    cout << haha.length() << endl;
//    
//    string s;
//    getline(cin, s);
//    cout << s << endl;
//    
//    getline(cin, s, 'x');
//    cout << s << endl;

    // Find
    cout << "\nfind" << "\n--------------------------------------------" << endl;
    string s1 {"The secret word is Boo"};
    string word {};
    
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if (position != string::npos)
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;
    cout << endl;
    return 0;
}
