#include <stdio.h>

int main(void)
{
	double i = 25.0;
	double j = i / 7.0;
	if (j * 7.0 == i)
		printf("Equal.\n");
	else
		printf("Unequal.\n");

	return 0;
}
