#include <stdio.h>
int main(void)
{
    char firstletter;
    int hour, minute;
    firstletter = 'a';    /* give firstletter the value 'a' */
    hour = 11;            /* assign the value 11 to hour */
    minute = 59;          /* set minute to 59 */
    printf("Current time is %d:%d\n", hour, minute);
    int total_minute;
    total_minute = hour * 60 + minute;
    printf("Current time is %d\n", total_minute);
    printf("%d and %d hours\n", hour, minute / 60);
}

