#include <stdio.h>

int eculid(int a, int b);

int main(void)
{
	int first = eculid(abs(13), abs(15));
	int second = eculid(abs(25), abs(50));
	printf("13 and 15 GCD is %d\n", first);
	printf("25 and 50 GCD is %d\n", second);
	return 0;
}

int eculid(int a, int b)
{
	if(a % b == 0)
		return b;
	else
		return eculid(b, a%b);
}

