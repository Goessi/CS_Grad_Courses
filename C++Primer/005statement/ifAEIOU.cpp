#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	cout << "Please enter something"<< endl;

	char haha;
	int acnt, ecnt, icnt, ocnt, ucnt;

	while (cin >> haha)
	{
		haha = toupper(haha);
		switch (haha) {
			case ('A'):
				++acnt;
				break;
			case ('I'):
				++icnt;
				break;
			case ('E'):
				++ecnt;
				break;
			case ('O'):
				++ocnt;
				break;
			case ('U'):
				++ucnt;
				break;
		}
	}

	cout <<"a, e, i, o, u"<< acnt << ecnt << icnt << ocnt << ucnt << endl;
	return 0;
}
