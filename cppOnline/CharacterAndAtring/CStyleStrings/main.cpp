#include <cstring>
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char first_name[20];
    char last_name[20];
    char full_name[50];
    char temp[50];
    
//    cout << first_name << endl;
//    
//    cout << "Please enter your first name: ";
//    cin >> first_name;
//    
//    cout << "Please enter your last name: ";
//    cin >> last_name;
//    cout << "-------------------------------" << endl;
//    
//    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
//    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;
//    
//    strcpy(full_name, first_name);
//    strcat(full_name, " ");
//    strcat(full_name, last_name);
//    cout << "Your full name is " << full_name << endl;

//    cout << "--------------------------------------" << endl;
//    cout << "Enter your full name: ";
//    cin >> full_name;
//    
//    cout << "Your full name is " << full_name << endl;
    
    cout << "--------------------------------------" << endl;
    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;
    
    cout << "--------------------------------------" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0) 
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;
    cout << "-----------------------------------------------" << endl;
    
    for(size_t i {0}; i < strlen(full_name); i++) {
        if (isalpha(full_name[i])) {
            full_name[i] = toupper(full_name[i]);
        }
    }
    cout << "Your full name is " << full_name << endl;
    
    cout << "----------------------------------" << endl;
    if (strcmp(temp, full_name) == 0) {
        cout << temp << " and " << full_name << " are the same" <<endl;
    }
    else {
        cout<< temp << " and " << full_name << " are not the same" << endl;
    }
    
    cout << "-------------------------------------" << endl;
    cout << "The result of comparing " << temp << " and " << full_name << " is " << strcmp(temp, full_name) << endl;
    cout << "The result of comparing " << full_name << " and " << temp << " is " << strcmp(full_name, temp) << endl;
    return 0;
}