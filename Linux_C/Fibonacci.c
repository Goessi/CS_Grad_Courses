#include <stdio.h>

int fibonacci(int n);

int main(void)
{
	int k = fibonacci(5);
	printf("The fibonacci of 5 is %d", k);
	return 0;
}

int fibonacci(int n)
{
	if(n == 1 || n == 0)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

