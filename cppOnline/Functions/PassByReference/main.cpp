#include <iostream>
#include <vector>
#include <string>

using namespace std;

//void scale_number(int &num);
//void swap(int &a, int &b);
//void print(const vector<int> &v);
//
//int main() {
//    int number {1000};
//    scale_number(number);
//    cout << number << endl;
//    
//    
//    int x {10}, y{20};
//    cout << x << " " << y << endl;
//    swap(x, y);
//    cout << x << " " << y << endl;
//    
//    vector<int> data {1,2,3,4,5};
//    print(data);
//    
//    return 0;
//}
//
//void scale_number(int &num) {
//    if (num > 100)
//        num = 100;
//}
//
//void swap(int &a, int &b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//void print(const vector<int> &v) {
//    for (auto num:v)
//        cout << num << endl;
//}

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

void pass_by_ref1(int &num) {
    num = 1000;
}

void pass_by_ref2(string &s) {
    s = "Changed";
}

void pass_by_ref3(vector<string> &v) {
    for (auto s : v)
        s = "GOOD";
}

void print_vector(const vector<string> &v) {
    for (auto s:v)
        cout << s << endl;
}

int main()
{
    int num {100};
    cout << num << endl;
    pass_by_ref1(num);
    cout << num << endl;
    
    string s {"haha"};
    cout << s << endl;
    pass_by_ref2(s);
    cout << s << endl;
    
    vector<string> ss {"Today", "is", "aa", "good", "day"};
    print_vector(ss);
    pass_by_ref3(ss);
    print_vector(ss);
    
    return 0;
}