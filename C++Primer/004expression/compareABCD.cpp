#include <iostream>

using namespace std;

int main()
{
	int A, B, C, D;
	cout <<" Please enter A, B, C, D" << endl;
	cin >> A >> B >> C >> D;

	if (A > B && B > C && C > D)
		cout << "You are right" << endl;
	else
		cout << "Nooooooooooooooooooooooooooo" << endl;

	return 0;
}
