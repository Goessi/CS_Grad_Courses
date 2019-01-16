#include <stdio.h>
#include <stdlib.h>
#define N 100000

int a[N];

void gen_random(int lower_bound, int upper_bound)
{
	int i;
	for (i = 0; i < N; i++)
	{
		a[i] = rand() % lower_bound + (upper_bound - lower_bound);
	}
}

int howmany(int value)
{
	int count = 0, i;
	for (i = 0; i < N; i++)
		if (a[i] == value)
			++count;
	return count;
}

int main(void)
{
	int i;

	gen_random(10, 20);
	printf("value\thow many\n");
	for (i = 10; i < 20; i++)
		printf("%d\t%d\n", i, howmany(i));

	return 0;
}

