#include <stdio.h>

int factorial(int n)
{
	int result = 1;
	for(int i = 1; i <= n; i++)
	{
		result = result * i;
	}
	return result;
}

int main(void)
{
	int k = factorial(10);
	printf("factorial of 10 is %d", k);
	return 0;
}

