#include <iostream>
#include <string>
#include <vector>

using namespace std;

int diff(int num)
{
	int i = num -1;
	cout << i << endl;

	static int count = 0;

	return ++count;
}

int main()
{
	cout << "Please enter a number " << endl;
	int num;
	cin >> num;
	cout << "parameter is " << num << endl;
	cout << "local parameter is ";
	int k = diff(num);
	cout << "local staic parameter is" << k << endl;

	return 0;
}
