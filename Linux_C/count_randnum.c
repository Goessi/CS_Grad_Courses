#include <stdio.h>
#include <stdlib.h>
#define N 20

int a[N];

void gen_random(int upper_bound)
{
	int i;
	for (i = 0; i < N; i++)
	{
		a[i] = rand() % upper_bound;
	}
}

int howmany(int value)
{
	int count = 0, i;
	for (i = 0; i < N; i++)
	{
		if(a[i] == value)
			++count;
	}
	return count;
}

int main(void)
{
	int i, histogram[10] = {0};

	gen_random(10);
	printf("value\thow many\n");
	for (i = 0; i < N; i++)
	{
		histogram[a[i]]++;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\t", i);
	}
	printf("\n");

	for (i = 0; i < N; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (histogram[j] != 0)
			{
				printf("%c\t", '*');
				histogram[j] = histogram[j] - 1;
			}
			else
			{
				printf("\t");
			}
		}
		printf("\n");
	}


	return 0;
}

