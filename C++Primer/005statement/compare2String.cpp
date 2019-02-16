#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s1, s2;
	do {
		cout << "Please input two strings" << endl;
		cin >> s1 >> s2;

		if (s1.size() >= s2.size())
			cout << s2 << endl;
		else
			cout << s1 << endl;
	}while (cin);

	return 0;
}
