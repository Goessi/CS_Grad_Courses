#include <iostream>
#include <vector>

using namespace std;

char get_selection () {
    char selection {};
    cout << "Enter your choice: ";
    cin >> selection;
    return selection;
}

void print(const vector<float> &v) {
     if (v.size() == 0) {
         cout <<"[] - the list is empty" << endl;
    }
    else {
        cout << "[ ";
        for(auto n:v) {
            cout << n << " ";
        }
        cout << "]"<< endl;
    }
}

void add(vector<float> &v) {
    int num_temp {};
    cout << "Enter an integer to add to the list: ";
    cin >> num_temp;
    v.push_back(num_temp);
    cout << num_temp << " is added" << endl;
}

void mean(const vector<float> &v) {
     if (v.size() != 0) {
         float num_sum {};
         for (auto n:v) {
             num_sum += n;
        }
        num_sum /= v.size();
        cout << "The mean is : " << num_sum << endl; 
     }
    else {
        cout << "Unable to calculate mean - no data" << endl;
    }
}

void small(const vector<float> &v) {
    float small {v[0]};
    for (auto n : v) {
        if (n < small)
            small = n;
    }
    cout << "The smallest number is: " << small << endl;
}

void large(const vector<float> &v) {
    float big {v[0]};
    for (auto n : v) {
        if (n > big)
            big = n;
    }
    cout << "The largest number is: " << big << endl;
}

void index() {
    cout << "P - Print numbers" <<endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\n" << endl;
}
int main() {
    char selection {};
    vector<float> numbers {};
    do {
        index();
        selection = get_selection();        
        if (selection == 'q' || selection == 'Q') {
            cout << "\nGoodbye..." << endl;
        }
        else {
            switch (selection) {
                case 'p':
                case 'P':
                    print(numbers);
                    break;
                case 'a':
                case 'A':
                    add(numbers);
                    break;
                case 'm':
                case 'M':
                    mean(numbers);
                    break;
                case 's':
                case 'S':
                    small(numbers);
                    break;
                case 'l':
                case 'L':
                    large(numbers);
                    break;
                default:
                    cout << "Unknown selection, please try again"<< endl;
            }
            cout << endl; 
        }
    } while (selection != 'q' && selection != 'Q'); 
    
    return 0;
}