#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string nowWord, beforeWord, maxWord;
	int nowCount = 0, maxCount = 0;
	cout << "Please enter words, seperated by space" << endl;

	while (cin >> nowWord)
	{
		if (nowWord == beforeWord)
			++nowCount;
		else
			nowCount = 1;

		if (nowCount >= maxCount)
		{
			maxWord = nowWord;
			maxCount = nowCount;
		}

		beforeWord = nowWord;
	}

	cout << "maxWord, maxCount" << maxWord << " " << maxCount << endl;

	return 0;
}
