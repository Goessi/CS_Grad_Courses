#include <iostream>
#include <vector>

using namespace std;

int main() {
    char selection {};
    vector<float> numbers {};
    do {
        cout << "P - Print numbers" <<endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\n" << endl;
        cout << "Enter your choice: ";
        cin >> selection;
        if (selection == 'q' || selection == 'Q') {
            cout << "\nGoodbye..." << endl;
        }
        else if (selection == 'p' || selection == 'P') {
            if (numbers.size() == 0) {
                cout <<"[] - the list is empty" << endl;
            }
            else {
                cout << "[ ";
                for(auto n:numbers) {
                    cout << n << " ";
                }
                cout << "]"<< endl;
            }
        }
        else if (selection == 'a' || selection == 'A') {
            int num_temp {};
            cout << "Enter an integer to add to the list: ";
            cin >> num_temp;
            numbers.push_back(num_temp);
            cout << num_temp << " is added" << endl;
        }
        else if (selection == 'm' || selection == 'M') {
            if (numbers.size() != 0) {
                float num_sum {};
            for (auto n:numbers) {
                num_sum += n;
            }
            num_sum /= numbers.size();
            cout << "The mean is : " << num_sum << endl; 
            }
            else {
                cout << "Unable to calculate mean - no data" << endl;
            }
            
        }
        else if (selection == 's' || selection == 'S') {
            float small {numbers[0]};
            for (auto n : numbers) {
                if (n < small)
                    small = n;
            }
            cout << "The smallest number is: " << small << endl;
        }
        else if (selection == 'l' || selection == 'L') {
            float big {numbers[0]};
            for (auto n : numbers) {
                if (n > big)
                    big = n;
            }
            cout << "The largest number is: " << big << endl;
        }
        else {
            cout << "Unknown selection, please try again"<< endl;
        }
        cout << endl;
    } while (selection != 'q' && selection != 'Q');
    
    
    return 0;
}