#include <stdio.h>

int main(void)
{
	int array[4] = {1, 2, 3, 4};
	int copy[4];

	for (int i = 0; i < 4; i++)
	{
		copy[i] = array[i];
		printf("%d\t", copy[i]);
	}

	return 0;

}
