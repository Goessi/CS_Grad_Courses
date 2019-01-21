#include <stdio.h>

#define LEN 5
int a[LEN] = { 10, 5, 2, 4, 7 };

void selection_sort(void)
{
	int num, idx;

	for(int i = 0; i < LEN; i++) {
		printf("%d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
		num = a[i];
		for (int j = i + 1; j < LEN; j++) {
			if (a[j] < num) {
				num = a[j];
				idx = j;
			}
		}

		a[idx] = a[i];
		a[i] = num;
	}
}

int main(void)
{
	selection_sort();
	return 0;
}

