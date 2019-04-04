#include <iostream>
using namespace std;
int main() {
//    cout << "Please input Frank score: ";
//    int f_score {};
//    cin >> f_score;
//    cout << "\nPlease intput Bill score: ";
//    int b_score {};
//    cin >> b_score;
//    cout << "\n";
//    
//    if (f_score != b_score) {
//        if (f_score > b_score) {
//            cout << "Frank wins." << endl;
//        } else {
//            cout << "Bill wins." << endl; 
//        }
//    } else {
//        cout << "Looks like a tie!" <<endl;
//    }

    int score {};
    cout << "Enter your score on the exam (0-100) :";
    cin >> score;
    char letter_grade {};
    
    if (score >= 0 && score <= 100) {
        if (score >= 90)
            letter_grade = 'A';
        else if (score >= 80)
            letter_grade = 'B';
        else if (score >= 70)
            letter_grade = 'C';
        else if (score >= 60)
            letter_grade = 'D';
        else 
            letter_grade = 'F';
        cout << letter_grade << endl;
        
        if (letter_grade == 'F') {
            cout << "Sorry, you must repeat this class." << endl;
        } else {
            cout << "Congrats. " <<endl;
        }
            
    } else {
        cout << "Sorry, " << score << " is out of range." << endl;
    }
    return 0;
}
