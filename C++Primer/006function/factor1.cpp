#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fact(int num)
{
	int res = 1;

	while (num != 1)
	{
		res *=num--;
	}

	return res;
}

int main()
{
	cout << "Please enter a number" << endl;
	int num;
	cin >> num;

	num = fact(num);

	cout << num << endl;

	return 0;
}
