#include <iostream>
#include <string>
#include <vector>

using namespace std;

int abso(int num)
{
	if (num >= 0)
		return num;
	else
		return -num;
}

int main()
{
	cout << "Please enter a number" <<endl;
	int num;
	cin >> num;
	num = abso(num);

	cout << num << endl;

	return 0;
}
