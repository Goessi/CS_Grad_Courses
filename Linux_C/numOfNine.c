#include <stdio.h>

int count_nine(int num)
{
	int count = 0;
	int first = num % 10;
	int tenth = (num - first) % 10;

	if(first == 9)
		count++;
	if(tenth == 9)
		count++;

	return count;
}

int main(void)
{
	int i = 0;
	int c = 0;
	while(i < 101)
	{
		c = c + count_nine(i);
		i++;
	}

	printf("the number of 9 between 0 and 100 is %d", c);
	return 0;
}
	
