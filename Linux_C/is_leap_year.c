#include <stdio.h>

int is_leap_year(int year);

int main(void)
{
   if(is_leap_year(2004))
   {
	   printf("it's a gooooooooooood year~");
   }
   else
	   printf("Nooooooooooooooooooooooooo");
}

int is_leap_year(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
	{
		return 1;
	}
	else if (year % 400 == 0)
	{
		return 1;
	}

	return 0;
}
