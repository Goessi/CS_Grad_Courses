#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fact(int num)
{
	int res = 1;
	while (num >= 1)
		res *= num--;

	return res;
}
