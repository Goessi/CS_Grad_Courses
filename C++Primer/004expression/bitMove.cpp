#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	unsigned long quiz1 = 0;
	1UL << 27;
	quiz1 != 1UL << 27;
	quiz1 = quiz1 | 1UL << 27;
	quiz1 &= ~(1UL << 27);
	bool status = quiz1 & (1UL << 27);

	cout << status << endl;

	return 0;
}
