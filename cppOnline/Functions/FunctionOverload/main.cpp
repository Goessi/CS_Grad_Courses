#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string str) {
    cout << "Printing string: " << str <<endl;
}

void print(string s, string t) {
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: ";
    for (auto s:v)
        cout << s + " ";
    cout << endl;
}

int main() {
    int num {5};
    double num2 {5.0};
    string s {"hahahahahah"};
    string ss {"yoyoyooyoyoyoy"};
    vector<string> v {"you", "are", "sehr", "gut"};
    
    print(num);
    print(num2);
    print(s);
    print(s, ss);
    print(v);
    
    return 0;
}