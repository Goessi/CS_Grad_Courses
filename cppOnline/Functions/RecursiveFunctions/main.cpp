#include <iostream>
using namespace std;
unsigned long long factorial(unsigned long long n) {
    if (n==0)
        return 1;
    return n * factorial(n-1);
}

unsigned long long Fibonacci(unsigned long long n) {
    if (n==0)
        return 0;
    if (n==1)
        return 1;
    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main() {
    cout << factorial(8) << endl;
    
    cout << Fibonacci(30) << endl;
    return 0;
}