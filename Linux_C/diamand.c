#include <stdio.h>

int diamand(int n, char a)
{
	if(n%2 == 0)
	{
		printf("nonononono\n");
		return 1;
	}

	int i, j;
	for(i = 0; i < n/2 + 1; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(j < n/2 - i || j > n/2 + i)
				printf(" \t");
			else
				printf("%c\t", a);
		}
		printf("\n");
	}
	for(i = n/2 + 1; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(j < i - n/2 || j > 3*n/2 - i - 1)
				printf(" \t");
			else
				printf("%c\t", a);
		}
		printf("\n");
	}
	return 0;

}

int main(void)
{
    diamand(10, '*');
    diamand(11, 'o');
    return 0;
}


