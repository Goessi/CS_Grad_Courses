#include <iostream>
#include <vector>
#include <string>

using namespace std;

void double_data (int *int_ptr);
void swap(int *a, int *b);
void display(vector<string> *v);
void display(int *array, int sentinel);

void double_data (int *int_ptr) {
    *int_ptr  *= 2;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(const vector<string> *v) {
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
}

void display(int *array, int sentinel) {
    while (*array != sentinel)
        cout << *array++ << " ";
    cout << endl;
}

int main() {
    int value {10};
    cout << value << endl;
    double_data(&value);
    cout << value << endl;

    //int value {10};
    int *int_ptr {nullptr};
    
    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;
    
    cout << "-------------------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;
    
    cout <<"\n------------------------------------" << endl;
    int a {100}, b {200};
    cout << "a is " << a <<endl;
    cout << "b is " << b << endl;
    swap(&a, &b);
    cout << "a is " << a <<endl;
    cout << "b is " << b << endl;

    cout << "---------------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    //display(&stooges);
    
    cout << "\n-------------------------------" << endl;
    int scores[] {100, 98, 97, 96, -1};
    display(scores, -1);
    
    return 0;
}