#include <iostream>
#include <string>
#include <vector>

using namespace std;

int increase()
{
	static int k = 0;

	return k++;
}

int main()
{
	for (int i = 0; i <= 100; i++)
		cout << increase() << endl;
	return 0;
}
