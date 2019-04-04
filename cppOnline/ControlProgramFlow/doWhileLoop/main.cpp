#include <iostream>
using namespace std;

int main()
{
//    int num {};
//    do {
//        cout << "Enter an integer between 1 and 5: ";
//        cin >> num;
//    } while (num <= 1 || num >= 5);
//    
//    cout << "Thanks~" << endl;

//    char selection {};
//    do {
//        double width {}, height {};
//        cout << "Enter width and height separated by a space : ";
//        cin >> width >> height;
//        
//        double area {width * height};
//        cout << "The area is " << area << endl;
//        
//        cout << "Calculate another? (Y/N): ";
//        cin >> selection;
//    }  while (selection == 'Y' || selection == 'y');
//    cout << "Thanks!" << endl;
    char choice {};
    int count {0};
    do {
        cout << "--------------------------------------" << endl;
        cout << "1 : Do this" << endl;
        cout << "2: Do that"  << endl;
        cout << "3: Do something else" << endl;
        cout << "Q: Quit" << endl;
        cout << "Enter your selection: ";
        cin >> choice;
        
        if (choice == '1')
            cout << "Doing this" << endl;
        else if (choice == '2')
            cout << "Doing that" << endl;
        else if (choice == '3')
            cout << "Doing something else" << endl;
        else {
            if (choice != 'q' &&choice != 'Q')
                cout << "Not an option" << endl;
        }
        
    } while (choice != 'q' &&choice != 'Q' );
    
    if (choice == 'q' || choice == 'Q')
        cout << "Goodbye..." << endl;
    return 0;
}
