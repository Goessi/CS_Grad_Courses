#include <iostream>

using namespace std;

int main()
{
	cout << "Please enter a number" << endl;
	int a;
	while (cin >> a)
	{
		if (a == 42)
		{
			cout << "congradulations! You are right" << endl;
			break;
		}
		else
			cout << "Please enter a number" << endl;
	}

	return 0;
}
