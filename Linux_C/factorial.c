#include <stdio.h>

int fac(int n)
{
	int result = 1;
	while(n > 0)
	{
		result = result * n;
		n = n - 1;
	}
	return result;
}

int main(void)
{
	int k = fac(7);
	printf("the factorial of 7 is %d\n", k);
	return 0;
}

