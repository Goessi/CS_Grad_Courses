#include <iostream>

using namespace std;

int *apply_all(const int *const a, int aa, const int *const b, int bb);
//void print(int *array_ptr, int n);
void print(const int *const arr, size_t size);
int *apply_all(const int *const a, int aa, const int *const b, int bb) {
    int n  {0};
    int *num = new int[aa*bb];
    for (int i = 0; i < aa; i++) {
        for (int j = 0; j < bb; j++) {
            num[n] = a[i] * b[j];
            n++;
        }
    }
    return num;
}

//void print(int arr[], int n) {
//    cout << "[ ";
//    for(int i = 0; i < n; i++)
//        cout << arr[i] << " " ;
//    cout << " ]";
//    cout << endl;
//}

void print(const int *const arr, size_t size) {
    cout << "[ ";
    for (size_t i{0}; i<size; i++)
        cout << arr[i] << " ";
    cout << " ]";
    cout << endl;
}

int main() {
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    print(array1, 5);
    
    int *arr_ptr {nullptr};
    arr_ptr = apply_all(array1, 5, array2, 3);
    print(arr_ptr, 15);
    delete [] arr_ptr;
    
    return 0;
}