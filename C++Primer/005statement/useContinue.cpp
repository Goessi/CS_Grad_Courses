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
		cout << "Please enter a word" << endl;
		if (currWord == beforeWord)
		{
			if (isupper(currWord[0]))
			{
				cout << currWord << endl;
				break;
			}
			else
			        continue;
		}
		else
			beforeWord = currWord;
	}

	if (currWord != beforeWord)
		cout << "oho, not eqaul" << endl;

	return 0;
}

