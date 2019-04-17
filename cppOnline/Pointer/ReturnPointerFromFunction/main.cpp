#include <iostream>

using namespace std;

int *largest_int (int *int_ptr1, int *int_ptr2);
int *create_arr(size_t num, int init = 0);

int *largest_int(int *int_ptr1, int *int_ptr2) {
    if (*int_ptr1 > *int_ptr2)
        return int_ptr1;
    else
        return int_ptr2;
}

int *create_arr(size_t num, int init) {
    int *arr_ptr {nullptr};
    int storage [num];
    arr_ptr = storage;
    for(size_t i = 0; i < num; i++) {
        *(arr_ptr + i) = init;
    }
    return arr_ptr;
}

int main() {
    int a {200};
    int b {100};
    
    int *largest_ptr {nullptr};
    largest_ptr = largest_int(&a, &b);
    cout << *largest_ptr << endl;
    
    int *my_array;
    my_array = create_arr(100, 20);
    delete [] my_array;
    return 0;
    
}