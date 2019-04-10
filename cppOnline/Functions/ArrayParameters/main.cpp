#include <iostream>
using namespace std;

//void print_array(const int numbers [], size_t size);
//void zero_array(int numbers [], size_t size);
//
//int main() {
//    int my_numbers[] {1,2,3,4,5};
//    zero_array(my_numbers, 5);
//    print_array(my_numbers, 5);
//    return 0;
//}
//
//void print_array(const int numbers [], size_t size) {
//    for (size_t i{0}; i < size; ++i) {
//        cout << numbers[i] << endl;
//    }
//}
//
//void zero_array(int numbers [], size_t size) {
//    for (size_t i{0}; i < size; i++)
//        numbers[i] = 0;
//}

void print_array(const int numbers [], size_t size);
void set_array(int numbers [], size_t size, int num);

void print_array(const int numbers [], size_t size) {
    for (int i{0}; i< size; i++)
        cout << numbers[i] << " ";
    cout << endl;
}

void set_array(int numbers [], size_t size, int num) {
    for (int i{0}; i < size; i++)
        numbers[i] = num;
}

int main() {
    int arr [] = {1,2,3,4,5};
    print_array(arr, 5);
    set_array(arr, 5, 100);
    print_array(arr, 5);
    
    return 0;
}