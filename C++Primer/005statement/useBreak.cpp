#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string currWord, beforeWord;
	cout << "Please enter a word" << endl;
	while (cin >> currWord)
	{
		if (currWord == beforeWord)
		{
			cout << currWord << endl;
			break;
		}
		else
			beforeWord = currWord;
		cout << "Please enter a word" << endl;
	}

	if (currWord != beforeWord)
		cout << "oho, not eqaul" << endl;

	return 0;
}

