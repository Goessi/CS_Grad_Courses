#include <stdio.h>

int main(void)
{
	int i, j, c;
	for(i=1; i<=9; i++)
	{
		c = 0;
		for(j=1; j<=9; j++)
		{
			c = c + 1;
			if(c <= i)
			{
				printf("%d\t", i*j);
			}
		}
		printf("\n");
	}
	return 0;
}
