#include <stdio.h>

void increment(int x)
{
	x = x + 1;
}

int main(void)
{
	int i = 1, j = 2;
	increment(i);
	increment(j);
	printf("i is %d, j is %d", i, j);
	return 0;
}

