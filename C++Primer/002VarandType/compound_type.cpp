#include <iostream>

int main()
{
	int ival = 1024;
	int &refVal = ival;

	std::cout << refVal << std::endl;

	refVal = 2;
	int ii = refVal;

	std::cout << ii << std::endl;

	return 0;
}
