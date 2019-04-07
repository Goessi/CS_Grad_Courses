#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

int main() 
{
    char my_name[8];
    strcpy(my_name, "Jing");
    
    
    char str[80];
    strcpy(str, "hello ");
    strcat(str, "there");
    cout << strlen(str);
    strcmp(str, "Another");
    return 0;
}
