#include <stdio.h>

void print_ten_one(int x);

int main(void)
{
	print_ten_one(10);
	return 0;
}

void print_ten_one(int x)
{
	int one = x % 10;
	x = x - one;
	int ten = x % 100;
        ten = ten / 10;
	printf("The 10th is %d, the 1th is %d", ten, one);
}

