#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[] = "hahahahahahaha";
    char str2[] = "yoyoyoyoyoyoyoyo";

    char result[strlen(str1) + strlen(str2) - 1];
    strcpy(result, str1);
    strcat(result, str2);

    cout << result << endl;

    return 0;

}
