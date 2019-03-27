#include <iostream>

using namespace std;

int main()
{
    int counter {10};
    int result {0};
    
//    cout << "counter: " << counter << endl;
//    
//    counter = counter +1;
//    cout << "counter: " << counter << endl;
//    
//    counter++;
//    cout << "counter: " << counter << endl;
//    
//    ++counter;
//    cout << "counter: " << counter << endl;

//    cout << "counter: " << counter << endl;
//    result = ++counter;
//    cout << "counter: " << counter << endl;
//    cout << "Result: " << result << endl;

//    cout << "counter: " << counter << endl;
//    result = counter++;
//    cout << "counter: " << counter << endl;
//    cout << "Result: " << result << endl;
    
    cout << "counter: " << counter << endl;
    result = ++counter + 10;
    cout << "counter: " << counter << endl;
    cout << "result: " << result << endl;
    
    return 0;
}
