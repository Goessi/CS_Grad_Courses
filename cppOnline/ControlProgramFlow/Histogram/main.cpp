#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int num_items {};
    cout << "How many data items do you have? ";
    cin >> num_items;
    vector<int> data {};
    
    for (int i {0}; i < num_items; ++i) {
        int data_item {};
        cout << "Enter your data: ";
        cin >> data_item;
        data.push_back(data_item);        
    }
    
    cout<< "\nHistogram Display" << endl;
    for (auto n : data) {
        cout << n;
        for (int i{0}; i < n ; ++i) {
            cout << "-";
        }
        cout << "\n";
    }
    
    return 0;
}